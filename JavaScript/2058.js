// Problema: 2058 - Triângulos e Polígonos Regulares | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s]                 | Tempo: 0.041s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lados = parseInt(input.trim());
console.log(lados - 2);