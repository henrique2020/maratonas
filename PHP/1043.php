<?php
// Problema: 1043 - Triângulo   | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s] | Tempo: 0.001s

$numeros = array_map('floatval', explode(' ', trim(fgets(STDIN))));
rsort($numeros);

[$a, $b, $c] = $numeros;
if(($b + $c) > $a) {
    printf("Perimetro = %.1f\n", $a + $b + $c);
} else {
    printf("Area = %.1f\n", (($a + $b) * $c) / 2);
}
?>