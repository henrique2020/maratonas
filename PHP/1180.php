<?php
// Problema: 1180 - Menor e Posição | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]     | Tempo: 0.206s

fgets(STDIN);
$numeros = array_map('intval', explode(" ", trim(fgets(STDIN))));
$min = min($numeros);
$pos = array_search($min, $numeros);
printf(
    "Menor valor: %d\n".
    "Posicao: %d\n",
    $min, $pos
)
?>