<?php
// Problema: 1052 - Mês         | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s] | Tempo: 0.045s

$mes = intval(trim(fgets(STDIN)));
$dt = DateTime::createFromFormat('!m', $mes);
echo "{$dt->format('F')}\n";
?>