<?php
// Problema: 1060 - Números Pares | Resposta: Accepted
// Linguagem: PHP (7.4.3) [+1s]   | Tempo: 0.093s

$input = stream_get_contents(STDIN);
$numbers = array_map('intval', explode("\n", trim($input)));
$positive = array_filter($numbers, fn($n) => $n > 0);
printf("%d valores positivos\n", count($positive));
?>
