<?php
// Problema: 1047 - Tempo de Jogo com Minutos | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]               | Tempo: 0.151s

[$hI, $mI, $hF, $mF] = array_map('intval', explode(' ', trim(fgets(STDIN))));
$ini = $hI * 60 + $mI;
$fim = $hF * 60 + $mF;
$duracao = $fim - $ini;
if($duracao <= 0){ $duracao += 24 * 60; }

$horas = floor($duracao / 60);
$minutos = $duracao % 60;
echo "O JOGO DUROU {$horas} HORA(S) E {$minutos} MINUTO(S)".PHP_EOL;
?>