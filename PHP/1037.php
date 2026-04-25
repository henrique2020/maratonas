<?php
// Problema: 1037 - Intervalo   | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s] | Tempo: 0.311s

$num = floatval(trim(fgets(STDIN)));
$EOL = PHP_EOL;
switch (true) {
    case $num < 0 || $num > 100 :
        echo "Fora de intervalo{$EOL}";
        break;
    case $num <= 25:
        echo "Intervalo [0,25]{$EOL}";
        break;
    case $num <= 50:
        echo "Intervalo (25,50]{$EOL}";
        break;
    case $num <= 75:
        echo "Intervalo (50,75]{$EOL}";
        break;
    case $num <= 100:
        echo "Intervalo (75,100]{$EOL}";
        break;
}
?>