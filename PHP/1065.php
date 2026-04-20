<?php
// Problema: 1065 - Pares entre Cinco Números | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]               | Tempo: 0.000s

$input = stream_get_contents(STDIN);
$numeros = array_map('intval', explode("\n", trim($input)));
$pares = array_filter($numeros, fn($n) => $n %2 == 0);
printf("%d valores pares\n", count($pares));
?>
