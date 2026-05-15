// Problema: 1180 - Menor e Posição  | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.145s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
const numbers = lines[1].trim().split(' ').map(Number);

const menor = Math.min(...numbers);
console.log(`Menor valor: ${menor}`);
console.log(`Posicao: ${numbers.indexOf(menor)}`);