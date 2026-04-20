// Problema: 1059 - Números Pares    | Resposta: Accepted
// Linguagem: JavaScript 12.18 [+2s] | Tempo: 0.034s

const [inicio, fim] = [1, 100];
const pares = [...Array(fim - inicio + 1).keys()]
    .map(i => i + inicio)
    .filter(n => n % 2 === 0);
    
console.log(pares.join('\n'));
