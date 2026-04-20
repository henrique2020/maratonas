// Problema: 1065 - Pares entre Cinco Números | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s]          | Tempo: 0.042s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
lines = lines.map(line => line.trim()).filter(line => line !== '');

var pares = lines.map(Number).filter(n => n % 2 === 0);
console.log(pares.length + ' valores pares');
