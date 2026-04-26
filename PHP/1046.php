<?php
// Problema: 1046 - Tempo de Jogo | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]   | Tempo: 0.000s

[$hI, $hF] = array_map('intval', explode(' ', trim(fgets(STDIN))));
$duracao = ($hI >= $hF) ? 24 - ($hI - $hF) : ($hF - $hI);
printf("O JOGO DUROU %d HORA(S)\n", $duracao);
?>