// Problema: 3303 - Palavrão         | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.031s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
console.log(input.length >= 10 ? 'palavrao' : 'palavrinha');
