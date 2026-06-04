<?php
// Problema: 1028 - Figurinhas  | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s] | Tempo: 0.203s

function gcd(int $a, int $b): int {
    if ($b == 0) { return $a; }
    return gcd($b, $a % $b);
}

$casos = intval(trim(fgets(STDIN)));
for ($i = 0; $i < $casos; $i++) {
    $entrada = array_map(
        'intval', 
        explode(' ', trim(fgets(STDIN)))
    );

    echo gcd($entrada[0], $entrada[1]) . PHP_EOL;
}
?>
