// Problema: 1177 - Preenchimento de Vetor II | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s]          | Tempo: 0.347s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
const v = parseInt(input.trim());

var saida = [];
for (let i = 0; i < 1000; i++) {
    saida.push(`N[${i}] = ${i % v}`);
}

console.log(saida.join('\n'));