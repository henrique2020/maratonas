// Problema: 1011 - Esfera           | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.191s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
const PI = 3.14159;

var raio = parseFloat(input);
var volume = (4/3) * PI * Math.pow(raio, 3);
console.log(`VOLUME = ${volume.toFixed(3)}`);
