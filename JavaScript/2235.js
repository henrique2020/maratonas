// Problema: 2235 - Andando no Tempo | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.061s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
const [c1, c2, c3] = input.trim().split(' ').map(Number);
console.log((
       c1 == c2 
    || c1 == c3 
    || c2 == c3 
    || c1 + c2 == c3 
    || c2 + c3 == c1 
    || c3 + c1 == c2) ? 'S' : 'N'
);