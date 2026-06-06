// Problema: 1036 - Fórmula de Bhaskara | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s]    | Tempo: 0.017s


var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var [a, b, c] = input.trim().split(' ').map(Number);

const delta = (b*b)-(4*a*c);
if(delta < 0 || a === 0) {
    console.log("Impossivel calcular");
} else {
    const r1 = (-b + Math.sqrt(delta)) / (2 * a);
    const r2 = (-b - Math.sqrt(delta)) / (2 * a);
    console.log(`R1 = ${r1.toFixed(5)}`);
    console.log(`R2 = ${r2.toFixed(5)}`);
}