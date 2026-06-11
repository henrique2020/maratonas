<?php
// Problema: 1113 - Crescente e Decrescente | Resposta: Accepted
//Linguagem: PHP (8.1.2) [+1s]              | Tempo: 0.000s

$entradas = explode(PHP_EOL, trim(file_get_contents("php://stdin")));
foreach($entradas as $linha){
    [$a, $b] = array_map('intval', explode(' ', $linha));
    if($a == $b) break;

    printf("%s\n", ($a > $b) ? 'Decrescente' : 'Crescente');
}
?>