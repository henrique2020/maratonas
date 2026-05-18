// Problema: 1181 - Linha na Matriz  | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.050s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.trim().split('\n');

const linha = parseInt(lines.shift());
const op = lines.shift();
const arr = lines.slice(linha*12, (linha+1)*12).map(parseFloat);

var res = arr.reduce((total, atual) => total + atual, 0);
if(op == 'M'){ res /= 12 };
console.log(`${res.toFixed(1)}`); 