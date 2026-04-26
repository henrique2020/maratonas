<?php
// Problema: 1048 - Aumento de Salário | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]        | Tempo: 0.000s

$salario = floatval(trim(fgets(STDIN)));
$percentual = null;
switch (true) {
    case $salario <= 400:
        $percentual = 15;
        break;
    case $salario <= 800:
        $percentual = 12;
        break;
    case $salario <= 1200:
        $percentual = 10;
        break;
    case $salario <= 2000:
        $percentual = 7;
        break;
    default:
        $percentual = 4;
}

$aumento = $salario * ($percentual / 100);
printf(
    "Novo salario: %.2f\n" .
    "Reajuste ganho: %.2f\n" .
    "Em percentual: %d %%\n",
    $salario + $aumento,
    $aumento,
    $percentual
);
?>