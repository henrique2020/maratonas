<?php
// Problema: 2423 - Receita de Bolo | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]     | Tempo: 0.120s

[$x, $o, $c] = array_map('intval', explode(' ', trim(fgets(STDIN))));
$bolos = [intdiv($x, 2), intdiv($o, 3), intdiv($c, 5)];
echo min($bolos) . PHP_EOL;
?>