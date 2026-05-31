<?php
// Problema: 1177 - Preenchimento de Vetor II | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]               | Tempo: 0.141s

$v = intval(trim(fgets(STDIN)));
for ($i = 0; $i < 1000; $i++) {
    $num = $i % $v;
    echo "N[{$i}] = {$num}" . PHP_EOL;
}
?>