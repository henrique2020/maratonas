// Problema: 2417 - Campeonato       | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.035s

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var [Cv, Ce, Cs, Fv, Fe, Fs] = input.split(' ').map(Number);
var Cp = (Cv * 3) + Ce;
var Fp = (Fv * 3) + Fe;

if (Cp == Fp) {
    Cp += Cs;
    Fp += Fs;
}

console.log(Cp > Fp ? 'C' : (Cp < Fp ? 'F' : '='));
