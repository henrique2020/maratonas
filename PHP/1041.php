<?php
// Problema: 1041 - Coordenadas de um Ponto | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]             | Tempo: 0.000s

class Ponto {
    public function __construct(
        public float $x,
        public float $y
    ) {}
}

$p = new Ponto(
    ...array_map(
        'floatval', 
        explode(' ', trim(fgets(STDIN)))
    )
);

$r = null;
if($p->x == 0 && $p->y == 0) { $r = "Origem"; } 
elseif($p->x == 0) { $r = "Eixo Y"; } 
elseif($p->y == 0) { $r = "Eixo X"; } 
else {
    if($p->x > 0 && $p->y > 0) { $r = "Q1"; } 
    elseif($p->x < 0 && $p->y > 0) { $r = "Q2"; } 
    elseif($p->x < 0 && $p->y < 0) { $r = "Q3"; } 
    else { $r = "Q4"; }
}

echo $r . PHP_EOL;