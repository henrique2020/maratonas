// Problema: 1060 - Números Positivos | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s]  | Tempo: 0.023s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var positivos = lines.map(Number).filter(n => n > 0);
console.log(positivos.length + ' valores positivos');
