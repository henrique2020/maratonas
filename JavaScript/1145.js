// Problema: 1145 - Sequência Lógica 2 | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s]   | Tempo: 0.336s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
const [quebra, limite] = input.split(' ').map(Number);
const arr = Array.from({ length: limite }, (_, i) => i + 1);

for (let i = 0; i < arr.length; i += quebra) {
    console.log(arr.slice(i, i + quebra).join(' '));
}
