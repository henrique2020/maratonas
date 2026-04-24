// Problema: 1020 - Idade em Dias    | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.022s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');

function div(valor, divisor) {
    let qtde = parseInt(valor / divisor);
    let resto = valor % divisor;
    return [qtde, resto];
}

var d = parseInt(input.split('\n')),
    m, a;

[a, d] = div(d, 365);
[m, d] = div(d, 30);

console.log(
    "%d ano(s)\n" + 
    "%d mes(es)\n" + 
    "%d dia(s)", 
    a, m, d
);
