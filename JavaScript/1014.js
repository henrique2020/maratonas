// Problema: 1014 - Consumo          | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.032s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var d = parseInt(lines.shift()),
    c = parseFloat(lines.shift());
console.log(`${(d / c).toFixed(3)} km/l`);
