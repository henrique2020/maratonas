<?php
// Problema: 1013 - O Maior     | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s] | Tempo: 0.165s

$numeros = array_map(
    'intval', 
    explode(' ', trim(fgets(STDIN)))
);
echo max(...$numeros) . " eh o maior\n";
?>
