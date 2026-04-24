// Problema: 1021 - Notas e Moedas   | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.030s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
const CEDULAS = [100, 50, 20, 10, 5, 2],
      MOEDAS = [1, 0.50, 0.25, 0.10, 0.05, 0.01];

function div(valor, divisor) {
    divisor *= 100;                             // Convertendo para centavos
    let qtde = parseInt(valor / divisor);
    let resto = valor % divisor;
    return [qtde, resto];
}

var dinheiro = resto = parseFloat(input) * 100, // Convertendo para centavos para evitar problemas de precisão
    qtde_cedulas;

console.log('NOTAS:');
for (let nota of CEDULAS) {
    [qtde_cedulas, resto] = div(resto, nota);
    console.log(`${qtde_cedulas} nota(s) de R$ ${nota}.00`);
}

console.log('MOEDAS:');
for (let moeda of MOEDAS) {
    [qtde_cedulas, resto] = div(resto, moeda);
    console.log(`${qtde_cedulas} moeda(s) de R$ ${moeda.toFixed(2)}`);
}
