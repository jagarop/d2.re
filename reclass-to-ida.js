/*
usage: node reclass-to-ida.js

takes reclass classes and renames them to struts. removes any inheritance done in reclass.
*/

const fs = require('fs');
const path = require('path');
const vmts = require('./D2R/data/reclass_vmts.json');

let lines = fs.readFileSync(`${__dirname}/D2R/Reclass.h`, 'utf8').split(/\r\n|\r|\n/);

let structs = [];

for(let i = 0; i < lines.length; i++) {
    var line = lines[i];
    if(lines[i].indexOf(' //') >= 0) {
        line = lines[i].substring(0, lines[i].indexOf(' //'));
    }
    let m = line.match(/^class (\w+)$/i);
    if(m) {
        struct = { name: m[1], fields: [], hasVMT: false };
        i+=3; //skip '{' and 'public:'
        do {
            let field = lines[i];
            field = field.replace('class ', '')
            i++;
            if(field.indexOf('virtual void') >= 0) {
                struct.hasVMT = true;
                continue;
            }
            struct.fields.push(field);
        } while(!lines[i+1].includes('static_assert'));
        if(struct.hasVMT) {
            let vmt = vmts[struct.name];
            if(!vmt) {
                throw new Error(`No VMT found for ${struct.name}!`);
            }
            structs.push({ name: `${struct.name}_VMT`, fields: vmt.map(e =>  `\t${e.ret}(${e.conv}* ${e.name})${e.args};`) });
            struct.fields.unshift(`\t${struct.name}_VMT *_VMT;`);
        }
        structs.push(struct);
    }
    m = line.match(/^class (\w+) : public (\w+)$/i);
    if(m) {
        let parent = structs.find(e => e.name == m[2]);
        struct = { name: m[1], fields: [...parent.fields], parent: parent, hasVMT: parent.hasVMT };
        i+=3; //skip '{' and 'public:'
        do {
            let field = lines[i];
            field = field.replace('class ', '')
            i++;
            if(field.indexOf('virtual void') >= 0) {
                struct.hasVMT = true;
                continue;
            }
            struct.fields.push(field);
        } while(!lines[i+1].includes('static_assert'));
        if(struct.hasVMT) {
            let vmt = vmts[struct.name];
            if(!vmt) {
                throw new Error(`No VMT found for ${struct.name}!`);
            }
            structs.push({ name: `${struct.name}_VMT`, fields: vmt.map(e =>  `\t${e.ret}(${e.conv}* ${e.name})${e.args};`) });
            struct.fields.unshift(`\t${struct.name}_VMT *_VMT;`);
        }
        structs.push(struct);
    }
}

var output = structs.map(e => `struct ${e.name};`).join('\n');
output += '\n#pragma pack(push, 1)\n\n' +
    structs.map(e => `struct ${e.name} {\n ${e.fields.join('\n')} \n};\n`).join('\n')
    + '\n#pragma pack(pop)';

fs.writeFileSync(`${__dirname}/D2R/IDA.h`, output);