<?php
// Problema: 1021 - Notas e Moedas | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]    | Tempo: 0.004s

function qtde_resto($dinheiro, $valor) {
    $valor = (int) round($valor * 100);
    $n = intdiv($dinheiro, $valor);
    $dinheiro %= $valor;
    return [$n, $dinheiro];
}

$dinheiro = (int) round(floatval(trim(fgets(STDIN))) * 100);
[$n100, $dinheiro] = qtde_resto($dinheiro, 100);
[$n50, $dinheiro] = qtde_resto($dinheiro, 50);
[$n20, $dinheiro] = qtde_resto($dinheiro, 20);
[$n10, $dinheiro] = qtde_resto($dinheiro, 10);
[$n5, $dinheiro] = qtde_resto($dinheiro, 5);
[$n2, $dinheiro] = qtde_resto($dinheiro, 2);

[$m1, $dinheiro] = qtde_resto($dinheiro, 1);
[$m050, $dinheiro] = qtde_resto($dinheiro, 0.50);
[$m025, $dinheiro] = qtde_resto($dinheiro, 0.25);
[$m010, $dinheiro] = qtde_resto($dinheiro, 0.10);
[$m005, $dinheiro] = qtde_resto($dinheiro, 0.05);
$m001 = $dinheiro;

printf(
    "NOTAS:\n".
    "%d nota(s) de R$ 100.00\n".
    "%d nota(s) de R$ 50.00\n".
    "%d nota(s) de R$ 20.00\n".
    "%d nota(s) de R$ 10.00\n".
    "%d nota(s) de R$ 5.00\n".
    "%d nota(s) de R$ 2.00\n".
    "MOEDAS:\n".
    "%d moeda(s) de R$ 1.00\n".
    "%d moeda(s) de R$ 0.50\n".
    "%d moeda(s) de R$ 0.25\n".
    "%d moeda(s) de R$ 0.10\n".
    "%d moeda(s) de R$ 0.05\n".
    "%d moeda(s) de R$ 0.01\n", 
    $n100, $n50, $n20, $n10, $n5, $n2, $m1, $m050, $m025, $m010, $m005, $m001
);
?>
