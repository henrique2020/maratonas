// Problema: 1017 - Gasto de Combustível | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s]     | Tempo: 0.025s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
const C = 12;

var h = parseInt(lines.shift()),
    vm = parseInt(lines.shift());
console.log(`${((h * vm) / C).toFixed(3)}`);
