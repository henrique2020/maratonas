// Problema: 1019 - Conversão de Tempo | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s]   | Tempo: 0.029s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');

function div(valor, divisor) {
    let qtde = parseInt(valor / divisor);
    let resto = valor % divisor;
    return [qtde, resto];
}

var s = parseInt(input.split('\n')),
    m, h;

[h, s] = div(s, 3600);
[m, s] = div(s, 60);

console.log("%d:%d:%d", h, m, s);
