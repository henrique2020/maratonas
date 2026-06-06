// Problema: 1158 - Soma de Ímpares Consecutivos III | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s]                 | Tempo: 0.021s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.trim().split('\n');
lines.shift();
lines.forEach(line => {
    var [x, y] = line.split(' ').map(Number);
    if (x % 2 === 0) x++;
    console.log(y * (x + y - 1));
});