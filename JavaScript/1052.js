// Problema: 1052 - Mês              | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.116s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
const month = parseInt(input.trim());
const date = new Date();
date.setMonth(month - 1);
console.log(date.toLocaleString('en-US', { month: 'long' }));