// Problema: 1094 - Experiências     | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.047s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.trim().split('\n');
lines.shift();

const animais = { C: 0, R: 0, S: 0 };
let total = 0;
for (const line of lines) {
    var [quantidade, tipo] = line.split(' ');
    quantidade = Number(quantidade);

    animais[tipo] += quantidade;
    total += quantidade;
}

const percentual = valor => ((valor * 100) / total).toFixed(2);

console.log(`Total: ${total}`);
console.log(`Total de coelhos: ${animais.C}`);
console.log(`Total de ratos: ${animais.R}`);
console.log(`Total de sapos: ${animais.S}`);
console.log(`Percentual de coelhos: ${percentual(animais.C)} %`);
console.log(`Percentual de ratos: ${percentual(animais.R)} %`);
console.log(`Percentual de sapos: ${percentual(animais.S)} %`);