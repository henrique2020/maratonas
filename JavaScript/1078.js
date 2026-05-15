// Problema: 1078 - Tabuada          | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.027s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
const multiplicador = parseInt(input.trim());
for(let i = 1; i <= 10; i++){
    console.log(`${i} x ${multiplicador} = ${i * multiplicador}`);
}