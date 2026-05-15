<?php
// Problema: 1075 - Resto 2    | Resposta: Accepted
//Linguagem: PHP (8.1.2) [+1s] | Tempo: 0.163s

$divisor = intval(trim(fgets(STDIN)));
$MAX = 10000;
for ($i = 0; $i < $MAX; $i++) {
    if ($i % $divisor === 2) {
        echo $i . PHP_EOL;
    }
}
?>