<?php
// Problema: 1064 - Positivos e Média | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]       | Tempo: 0.000s

$input = stream_get_contents(STDIN);
$numbers = array_map('floatval', explode("\n", trim($input)));
$positive = array_filter($numbers, fn($n) => $n > 0);

$qtde = count($positive);
$avg = array_sum($positive) / $qtde;
printf(
    "%d valores positivos\n" .
    "%.1f\n", 
    $qtde, $avg
);

?>