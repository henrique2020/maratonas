<?php
// Problema: 1011 - Esfera      | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s] | Tempo: 0.000s

$raio = floatval(trim(fgets(STDIN)));
$volume = (4/3) * round(pi(), 5) * ($raio**3);
printf("VOLUME = %.3f\n", $volume);
?>