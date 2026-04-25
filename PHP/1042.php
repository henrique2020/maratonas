<?php
// Problema: 1042 - Sort Simples | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]  | Tempo: 0.000s

function printar($arr) {
    echo implode(PHP_EOL, $arr) . PHP_EOL;
}

$ordenado = $numeros = array_map('intval', explode(' ', trim(fgets(STDIN))));
sort($ordenado);

printar($ordenado);
echo PHP_EOL;
printar($numeros);
?>