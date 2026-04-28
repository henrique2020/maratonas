// Problema: 1042 - Sort Simples     | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.028s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var numeros = input.split(' ').map(Number),
    ordenado = numeros.slice().sort((a, b) => a - b);

console.log(ordenado.join('\n'));
console.log('');
console.log(numeros.join('\n'));
