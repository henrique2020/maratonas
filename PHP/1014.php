<?php
// Problema: 1014 - Consumo     | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s] | Tempo: 0.000s

$d = intval(trim(fgets(STDIN)));
$c = floatval(trim(fgets(STDIN)));
printf("%.3f km/l\n", ($d/$c));
?>