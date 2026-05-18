// Problema: 1847 - Bem-vindos e Bem-vindas ao Inverno! | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s]                    | Tempo: 0.041s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
const [d1, d2, d3] = input.trim().split(' ').map(Number);

const happy =
  (d1 > d2 && d3 >= d2) ||
  (d2 > d1 && d3 > d2 && (d3 - d2) >= (d2 - d1)) ||
  (d1 > d2 && d2 > d3 && (d1 - d2) > (d2 - d3)) ||
  (d2 === d1 && d3 > d2);

console.log(happy ? ':)' : ':(');