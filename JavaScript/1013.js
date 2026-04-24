// Problema: 1013 - O Maior          | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.028s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');

var n = input.split(' ').map(x => parseInt(x));
console.log(`${Math.max(...n)} eh o maior`);
