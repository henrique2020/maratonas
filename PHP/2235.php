<?php
// Problema: 2235 - Andando no Tempo | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]      | Tempo: 0.000s

[$c1, $c2, $c3] = array_map('intval', explode(" ", trim(fgets(STDIN))));
echo ((
    $c1 == $c2 || $c1 == $c3 || $c2 == $c3  
    || $c1 + $c2 == $c3 || $c2 + $c3 == $c1 || $c3 + $c1 == $c2) 
    ? "S" : "N") . PHP_EOL;
?>