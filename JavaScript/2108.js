// Problema: 2108 - Contando Caracters | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s]   | Tempo: 0.020s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var linhas = input.split('\n');
linhas.pop();   //Remove a última linha '0'
const palavras = linhas.map(linha => linha.trim().split(' '));

var maior = {palavra: '', tamanho: 0};
var saida = [];

palavras.forEach(linha => {
    var saidaLinha = [];
    linha.forEach(palavra => {
        saidaLinha.push(palavra.length);
        if (palavra.length >= maior.tamanho) {
            maior.tamanho = palavra.length;
            maior.palavra = palavra;
        }
    });
    saida.push(saidaLinha.join('-'));
});

console.log(saida.join('\n'));
console.log(`\nThe biggest word: ${maior.palavra}`);
