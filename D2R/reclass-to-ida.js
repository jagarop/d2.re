/*
usage: node reclass-to-ida.js

takes reclass classes and renames them to struts. removes any inheritance done in reclass.
*/

const fs = require('fs');
const path = require('path');

let lines = fs.readFileSync(`${__dirname}/data/Reclass.h`, 'utf8').split(/\r\n|\r|\n/);

let structs = [];

for(let i = 0; i < lines.length; i++) {
    let m = lines[i].match(/^class (\w+)$/i);
    if(m) {
        struct = { name: m[1], fields: [] };
        i+=3; //skip '{' and 'public:'
        do {
            let field = lines[i];
            field = field.replace('class ', '')
            struct.fields.push(field);
            i++;
        } while(!lines[i+1].includes('static_assert'));
        structs.push(struct);
    }
    m = lines[i].match(/^class (\w+) : public (\w+)$/i);
    if(m) {
        let parent = structs.find(e => e.name == m[2]);
        struct = { name: m[1], fields: [...parent.fields], parent: parent };
        i+=3; //skip '{' and 'public:'
        do {
            let field = lines[i];
            field = field.replace('class ', '')
            struct.fields.push(field);
            i++;
        } while(!lines[i+1].includes('static_assert'));
        structs.push(struct);
    }
}

var output = structs.map(e => `struct ${e.name};`).join('\n');
output += '\n#pragma pack(push, 1)\n\n' +
    structs.map(e => `struct ${e.name} {\n ${e.fields.join('\n')} \n};\n`).join('\n')
    + '\n#pragma pack(pop)';

fs.writeFileSync(`${__dirname}/IDA.h`, output);