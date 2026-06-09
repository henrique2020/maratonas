<?php
// Problema: 2157 - Sequência Espelho | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]       | Tempo: 0.000s

$linhas = explode(PHP_EOL, trim(file_get_contents("php://stdin")));
array_shift($linhas);

foreach($linhas as $linha){
    [$B, $E] = array_map('intval', explode(" ", $linha));
    $string = '';
    for($i = $B; $i <= $E; $i++){
        $string .= "{$i}";
    }
    $string .= strrev($string);
    echo $string . PHP_EOL;
}
?>