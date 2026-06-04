// Problema: 2423 - Receita de Bolo  | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.085s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var [x, o, c] = input.split(' ').map(Number);
var bolos = [Math.floor(x/2), Math.floor(o/3), Math.floor(c/5)];
console.log(Math.min(...bolos));