<?php
// Problema: 1040 - Média 3     | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s] | Tempo: 0.000s

[$n1, $n2, $n3, $n4] = array_map('floatval', explode(' ', trim(fgets(STDIN))));
$n1 *= 2;
$n2 *= 3;
$n3 *= 4;
$n4 *= 1;

$media = ($n1 + $n2 + $n3 + $n4) / 10;
printf("Media: %.1f\n", $media);
if ($media >= 7.0) { echo "Aluno aprovado.\n"; } 
elseif ($media < 5) { echo "Aluno reprovado.\n"; } 
else {
    echo "Aluno em exame.\n";
    $nota_exame = floatval(trim(fgets(STDIN)));
    $media_final = ($media + $nota_exame) / 2;
    printf("Nota do exame: %.1f\n", $nota_exame);
    if ($media_final >= 5.0) {
        echo "Aluno aprovado.\n";
    } else {
        echo "Aluno reprovado.\n";
    }
    printf("Media final: %.1f\n", $media_final);
}
?>