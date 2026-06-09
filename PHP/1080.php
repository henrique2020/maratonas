<?php
// Problema: 1080 - Maior e Posição | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]     | Tempo: 0.059s

$numeros = array_map(
    'intval', 
    explode(PHP_EOL, trim(file_get_contents("php://stdin")))
);

$maior = max($numeros);
$pos = array_search($maior, $numeros) + 1;

printf(
    "%d\n".
    "%d\n",
    $maior, $pos
);
?>