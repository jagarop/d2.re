//UPDATE PATH TO D2MOO DIR
const D2MOO_PATH = "D:/Git/D2MOO"

const fs = require('fs');
const path = require('path');

function* walkSync(dir) {
  const files = fs.readdirSync(dir, { withFileTypes: true });
  for (const file of files) {
    if (file.isDirectory()) {
      yield* walkSync(path.join(dir, file.name));
    } else {
      yield path.join(dir, file.name);
    }
  }
}

let s = `#pragma once
#include <cstdint>

//dump of D2MOO enums. some of these may not be valid for D2R.

`;

for (const filePath of walkSync(__dirname)) {
  if(!filePath.endsWith(".h")
    || filePath.includes("D2Unicode.h")) {
    continue;
  }
  let lines = fs.readFileSync(filePath, 'utf-8').split(/\r?\n/);
  for(var i = 0; i < lines.length; i++) {
    if(!lines[i].trim().match(/^enum/)) {
      continue;
    }
    do {
      s += lines[i++] + '\n';
    } while(!lines[i].includes('};'))
    s += lines[i] + '\n';
  }
}

fs.writeFileSync('D2R/data/D2Enums.h', s);