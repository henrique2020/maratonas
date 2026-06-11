// Problema: 1113 - Crescente e Decrescente | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s]        | Tempo: 0.025s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var linhas = input.split('\n');
for(var linha of linhas){
    var [a, b] = linha.split(' ').map(Number);
    if(a == b) break;
    console.log((a > b) ? 'Decrescente' : 'Crescente');
}