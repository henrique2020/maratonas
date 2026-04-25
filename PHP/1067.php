<?php
// Problema: 1067 - Números Ímpares | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]     | Tempo: 0.000s

$EOL = PHP_EOL;
[$inicio, $fim] = [1, trim(fgets(STDIN))];
$impares = array_filter(range($inicio, $fim), fn($n) => $n % 2 != 0);
echo implode("{$EOL}", $impares) . $EOL;
?>