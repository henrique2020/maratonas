<?php
// Problema: 1015 - Distância Entre Dois Pontos | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]                 | Tempo: 0.000s

class Ponto {
    public function __construct(
        public float $x,
        public float $y
    ) {}
}

function getPonto(): Ponto {
    $p = array_map(
        'floatval', 
        explode(' ', trim(fgets(STDIN)))
    );
    return new Ponto(...$p);
}

function distancia(Ponto $p1, Ponto $p2): float {
    return sqrt(pow($p2->x - $p1->x, 2) + pow($p2->y - $p1->y, 2));
}

printf("%.4f\n", distancia(getPonto(), getPonto()));
