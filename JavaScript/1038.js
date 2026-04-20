// Problema: 1038 - Lanche           | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.036s

const tabela = {1: 4.0, 2: 4.5, 3: 5.0, 4: 2.0, 5: 1.5};

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var [cod, qtde] = input.split(' ').map(Number);
console.log(`Total: R$ ${(tabela[cod] * qtde).toFixed(2)}`);
