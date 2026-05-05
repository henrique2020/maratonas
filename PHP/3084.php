<?php
// Problema: 3084 - Relógio Antigo | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]    | Tempo: 0.000s

$linhas = explode("\n", file_get_contents("php://stdin"));
$ANGULOS = (object) [
    'hora' => 360/12, 
    'minuto' => 360/60
];

foreach ($linhas as $linha) {
    [$h, $m] = array_map('intval', explode(" ", $linha));
    printf("%02d:%02d\n", ($h / $ANGULOS->hora), ($m / $ANGULOS->minuto));
}
?>
