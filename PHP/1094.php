<?php
// Problema: 1094 - Experiências | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]  | Tempo: 0.136s

$linhas = explode(PHP_EOL, trim(file_get_contents("php://stdin")));
array_shift($linhas);

$cobaias = (object) ['T' => 0, 'C' => 0, 'R' => 0, 'S' => 0];
foreach($linhas as $linha){
    [$qtde, $animal] = explode(' ', $linha);
    $qtde = intval($qtde);

    $cobaias->$animal += $qtde;
    $cobaias->T += $qtde;
}

$percentual = fn($qtde, $total) => round((($qtde*100)/$total), 2);
printf(
    "Total: %d cobaias\n".
    "Total de coelhos: %d\n".
    "Total de ratos: %d\n".
    "Total de sapos: %d\n".
    "Percentual de coelhos: %.2f %%\n".
    "Percentual de ratos: %.2f %%\n".
    "Percentual de sapos: %.2f %%\n",
    $cobaias->T, $cobaias->C, $cobaias->R, $cobaias->S, 
    $percentual($cobaias->C, $cobaias->T), $percentual($cobaias->R, $cobaias->T), $percentual($cobaias->S, $cobaias->T)
);
?>