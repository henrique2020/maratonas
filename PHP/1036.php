<?php
// Problema: 1036 - Fórmula de Bhaskara | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]         | Tempo: 0.156s

[$a, $b, $c] = array_map(
    'floatval', 
    explode(' ', trim(fgets(STDIN)))
);

$delta = ($b * $b) - (4 * $a * $c);
if($a == 0 || $delta < 0) {
    echo "Impossivel calcular\n";
} else {
    $raiz = sqrt($delta);
    $r1 = (-$b + $raiz) / (2 * $a);
    $r2 = (-$b - $raiz) / (2 * $a);
    printf(
        "R1 = %0.5f\n".
        "R2 = %0.5f\n", 
        $r1, $r2
    );
}
?>