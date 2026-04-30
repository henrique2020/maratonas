<?php
// Problema: 1145 - Sequência Lógica 2 | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]        | Tempo: 0.187s

[$quebra, $limite] = array_map('intval', explode(' ', trim(fgets(STDIN))));
$arr = range(1, $limite);
$sub_arr = array_chunk($arr, $quebra);

foreach ($sub_arr as $chunk) {
    echo implode(' ', $chunk) . "\n";
}
?>
