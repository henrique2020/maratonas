<?php
// Problema: 1059 - Números Pares | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]   | Tempo: 0.000s

$EOL = PHP_EOL;
[$inicio, $fim] = [1, 100];
$pares = array_filter(range($inicio, $fim), fn($n) => $n % 2 == 0);
echo implode("{$EOL}", $pares) . $EOL;
?>
