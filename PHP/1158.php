<?php
// Problema: 1158 - Soma de Ímpares Consecutivos III | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]                      | Tempo: 0.211S

$rep = intval(fgets(STDIN));
for ($i = 0; $i < $rep; $i++) {
    [$x, $y] = array_map('intval', explode(" ", fgets(STDIN)));

    if ($x % 2 == 0) $x++;

    $soma = $y * ($x + $y - 1);
    echo $soma . PHP_EOL;
}
?>