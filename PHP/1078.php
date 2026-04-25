<?php
// Problema: 1078 - Tabuada     | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s] | Tempo: 0.001s

$n = intval(trim(fgets(STDIN)));
for ($i = 1; $i <= 10; $i++) {
    printf("%d x %d = %d\n", $i, $n, ($i * $n));
}
?>