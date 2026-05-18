<?php
// Problema: 1181 - Linha na Matriz | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]     | Tempo: 0.002s

$entradas = explode(PHP_EOL, trim(file_get_contents("php://stdin")));
$linha = intval(array_shift($entradas));
$operacao = array_shift($entradas);

$valores = [];
for ($i=$linha*12; $i < ($linha+1)*12; $i++) { 
    $valores[] = floatval($entradas[$i]);
}

$resultado = array_sum($valores);
if($operacao == 'M') { $resultado /= 12; }
printf("%.1f\n", $resultado);
?>