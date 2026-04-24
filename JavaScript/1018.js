// Problema: 1018 - Cédulas          | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.028s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
const CEDULAS = [100, 50, 20, 10, 5, 2, 1];

function div(valor, divisor) {
    let qtde = parseInt(valor / divisor);
    let resto = valor % divisor;
    return [qtde, resto];
}

var dinheiro = resto = parseInt(input),
    qtde_cedulas;

console.log(dinheiro);
for (let nota of CEDULAS) {
    [qtde_cedulas, resto] = div(resto, nota);
    console.log(`${qtde_cedulas} nota(s) de R$ ${nota},00`);
}
