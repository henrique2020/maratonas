<?php
// Problema: 1020 - Idade em Dias | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]   | Tempo: 0.081s

$d = intval(trim(fgets(STDIN)));

$a = intdiv($d, 365);
$d %= 365;

$m = intdiv($d, 30);
$d %= 30;

printf(
    "%d ano(s)\n".
    "%d mes(es)\n".
    "%d dia(s)\n", 
    $a, $m, $d
);
?>
