// Problema: 1028 - Figurinhas       | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.626s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.trim().split('\n');
lines.shift();

const gcd = (a, b) => b === 0 ? Math.abs(a) : gcd(b, a % b);
for(var line of lines) {
    var [a, b] = line.split(' ').map(Number);
    console.log(gcd(a, b));
}