<?php
// Problema: 1024 - Criptografia | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]  | Tempo: 0.363s

$casos = intval(trim(fgets(STDIN)));

for ($i = 0; $i < $casos; $i++) {
    $entrada = trim(fgets(STDIN));

    $cod1 = '';
    for ($j = 0; $j < strlen($entrada); $j++) {
        $char = $entrada[$j];

        if (ctype_alpha($char)) {
            $cod1 .= chr(ord($char) + 3);
        } else {
            $cod1 .= $char;
        }
    }

    $cod2 = strrev($cod1);  // Inverte string

    $metade = intdiv(strlen($cod2), 2);
    $cod3 = substr($cod2, 0, $metade);

    for ($j = $metade; $j < strlen($cod2); $j++) {
        $cod3 .= chr(ord($cod2[$j]) - 1);
    }

    echo $cod3 . PHP_EOL;
}
?>
