<?php
// Problema: 1018 - Cédulas     | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s] | Tempo: 0.049s

function notas_resto($dinheiro, $nota) {
    $n = intdiv($dinheiro, $nota);
    $dinheiro = $dinheiro % $nota;
    return [$n, $dinheiro];
}

$dinheiro = intval(trim(fgets(STDIN)));
$n1 = $dinheiro;
[$n100, $n1] = notas_resto($n1, 100);
[$n50, $n1] = notas_resto($n1, 50);
[$n20, $n1] = notas_resto($n1, 20);
[$n10, $n1] = notas_resto($n1, 10);
[$n5, $n1] = notas_resto($n1, 5);
[$n2, $n1] = notas_resto($n1, 2);

printf(
    "%d\n".
    "%d nota(s) de R$ 100,00\n".
    "%d nota(s) de R$ 50,00\n".
    "%d nota(s) de R$ 20,00\n".
    "%d nota(s) de R$ 10,00\n".
    "%d nota(s) de R$ 5,00\n".
    "%d nota(s) de R$ 2,00\n".
    "%d nota(s) de R$ 1,00\n", 
    $dinheiro, $n100, $n50, $n20, $n10, $n5, $n2, $n1
);
?>
