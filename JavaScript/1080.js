// Problema: 1080 - Maior e Posição  | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.028s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
const numeros = input.trim().split('\n').map(Number);

const maior = Math.max(...numeros);
const posicao = numeros.indexOf(maior) + 1;

console.log(maior);
console.log(posicao);