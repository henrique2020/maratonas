// Problema: 3084 - Relógio Antigo   | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.092s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function calculaFormtata(valor, divisor) {
    return (valor / divisor).toString().padStart(2, '0');
}

const angulos = { hora: 360/12, minuto: 360/60 };

lines.forEach(line => {
    const [h, m] = line.split(' ').map(Number);
    console.log(`${calculaFormtata(h, angulos.hora)}:${calculaFormtata(m, angulos.minuto)}`);
});
