<?php
// Problema: 1028 - Figurinhas  | Resposta: Time limit exceeded
// Linguagem: PHP (8.1.2) [+1s] | Tempo: 2.000s

function GCD($a, $b) {
    $menor = min($a, $b);
    $gcd = 1;

    for ($i = 1; $i <= $menor; $i++) {
        if ($a % $i === 0 && $b % $i === 0) {
            $gcd = $i;
        }
    }

    return $gcd;
}

$casos = intval(trim(fgets(STDIN)));

for ($i = 0; $i < $casos; $i++) {
    $entrada = array_map(
        'intval', 
        explode(' ', trim(fgets(STDIN)))
    );

    echo GCD(...$entrada) . PHP_EOL;
}
?>
