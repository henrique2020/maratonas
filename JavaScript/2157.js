// Problema: 2157 - Sequência Espelho | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s]  | Tempo: 0.045s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.trim().split('\n');
lines.shift();

lines.forEach(line => {
    const [B, E] = line.trim().split(' ').map(Number);
    var str = '';
    for (let i = B; i <= E; i++) { str += `${i}`; }

    str += str.split('').reverse().join('');
    console.log(str);
});