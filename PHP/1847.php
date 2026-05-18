<?php
// Problema: 1847 - Bem-vindos e Bem-vindas ao Inverno! | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]                         | Tempo: 0.000s

[$d1, $d2, $d3] = array_map('intval', explode(" ", trim(fgets(STDIN))));

$feliz = 
    ($d1 > $d2 && $d3 >= $d2)
    || ($d2 > $d1 && $d3 > $d2 && ($d3 - $d2) >= ($d2 - $d1))
    || ($d1 > $d2 && $d2 > $d3 && ($d1 - $d2) > ($d2 - $d3))
    || ($d2 === $d1 && $d3 > $d2);

echo ($feliz) ? ':)' : ':(';
echo PHP_EOL;
?>