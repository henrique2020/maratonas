// Problema: 1012 - Área             | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.022s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
const PI = 3.14159;

var [a, b, c] = input.split(' ').map(parseFloat);
console.log(`TRIANGULO: ${((a * c) / 2).toFixed(3)}`);
console.log(`CIRCULO: ${(PI * c * c).toFixed(3)}`);
console.log(`TRAPEZIO: ${(((a + b) * c) / 2).toFixed(3)}`);
console.log(`QUADRADO: ${(b * b).toFixed(3)}`);
console.log(`RETANGULO: ${(a * b).toFixed(3)}`);
