// Problema: 1037 - Intervalo        | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.024s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var num = parseFloat(input);
switch (true) {
    case num < 0 || num > 100:
        console.log('Fora de intervalo');
        break;
    case num <= 25:
        console.log('Intervalo [0,25]');
        break;
    case num <= 50:
        console.log('Intervalo (25,50]');
        break;
    case num <= 75:
        console.log('Intervalo (50,75]');
        break;
    case num <= 100:
        console.log('Intervalo (75,100]');
        break;
}