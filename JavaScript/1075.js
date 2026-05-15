// Problema: 1075 - Resto 2          | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.029s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
const divisor = parseInt(input.trim());
const max = 10000;
for(let i = 0; i < max; i++){
    if(i % divisor === 2){
        console.log(i);
    }
}