<?php
// Problema: 1028 - Figurinhas  | Resposta: Runtime error
// Linguagem: PHP (8.1.2) [+1s] | Tempo: 0.178s

$casos = intval(trim(fgets(STDIN)));

for ($i = 0; $i < $casos; $i++) {
    $entrada = array_map(
        'intval', 
        explode(' ', trim(fgets(STDIN)))
    );

    echo (int) gmp_gcd($entrada[0], $entrada[1]) . PHP_EOL;
}
?>
