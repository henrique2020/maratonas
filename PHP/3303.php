<?php
// Problema: 3303 - Palavrão    | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s] | Tempo: 0.147s

$palavra = trim(fgets(STDIN));
printf("%s\n", strlen($palavra) >= 10 ? 'palavrao' : 'palavrinha');
?>
