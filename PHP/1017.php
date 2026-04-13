<?php
// Problema: 1017 - Gasto de Combustível | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]          | Tempo: 0.003s

const C = 12;
$h = intval(trim(fgets(STDIN)));
$vm = intval(trim(fgets(STDIN)));
printf("%.3f\n", ($h*$vm)/C);
?>