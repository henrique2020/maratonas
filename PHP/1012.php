<?php
// Problema: 1012 - Área        | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s] | Tempo: 0.163s

[$a, $b, $c] = array_map('floatval', explode(' ', trim(fgets(STDIN))));

printf("TRIANGULO: %.3f\n", ($a * $c) / 2);
printf("CIRCULO: %.3f\n", round(pi(), 5) * $c * $c);
printf("TRAPEZIO: %.3f\n", (($a + $b) * $c) / 2);
printf("QUADRADO: %.3f\n", $b * $b);
printf("RETANGULO: %.3f\n", $a * $b);
?>
