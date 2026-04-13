<?php
// Problema: 1019 - Conversão de Tempo | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]        | Tempo: 0.000s

$s = intval(trim(fgets(STDIN)));

$h = intdiv($s, 3600);
$s %= 3600;

$m = intdiv($s, 60);
$s %= 60;

printf("%02d:%02d:%02d\n", $h, $m, $s);
?>