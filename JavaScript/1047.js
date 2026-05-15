// Problema: 1047 - Tempo de Jogo com Minutos | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s]          | Tempo: 0.026s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
const [hI, mI, hF, mF] = input.split(' ').map(Number);
const inicio = hI * 60 + mI;
const fim = hF * 60 + mF;

let duracao = fim - inicio;
if (duracao <= 0) { duracao += 24 * 60; }

const horas = Math.floor(duracao / 60);
const minutos = duracao % 60;

console.log(`O JOGO DUROU ${horas} HORA(S) E ${minutos} MINUTO(S)`);