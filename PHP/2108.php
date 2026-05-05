<?php
// Problema: 2108 - Contando Caracters | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s]        | Tempo: 0.000s

$entradas = explode("\n", file_get_contents("php://stdin"));
array_pop($entradas); // Remove a última linha '0'
$palavras = array_map(function($entrada) {
    return explode(' ', trim($entrada));
}, $entradas);

$maior = '';
$lengthMaior = -1;
$saida = [];
foreach ($palavras as $linha) {
    $saida_linha = [];
    foreach ($linha as $palavra) {
        $saida_linha[] = strlen($palavra);
        if (strlen($palavra) >= $lengthMaior) {
            $lengthMaior = strlen($palavra);
            $maior = $palavra;
        }
    }

    $saida[] = implode('-', $saida_linha);
}

printf(
    "%s\n\n".
    "The biggest word: %s\n", 
    implode("\n", $saida), $maior
);
?>
