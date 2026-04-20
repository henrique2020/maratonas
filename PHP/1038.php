<?php
// Problema: 1038 - Lanche      | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s] | Tempo: 0.000s

$tabela = [1 => 4.0, 2 => 4.5, 3 => 5.0, 4 => 2.0, 5 => 1.5];
[$cod, $qtde] = array_map('intval', explode(' ', trim(fgets(STDIN))));
printf("Total: R$ %.2f\n", $tabela[$cod] * $qtde);
?>
