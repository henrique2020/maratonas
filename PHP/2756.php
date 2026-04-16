<?php
  // Problema: 2756 - Saída 10    | Resposta: Accepted
  // Linguagem: PHP (8.1.2) [+1s] | Tempo: 0.000s

  $letras = ['A', 'B', 'C', 'D', 'E'];
  $total = count($letras);
  
  for ($i = -($total - 1); $i <= ($total - 1); $i++) {
  
      $index = abs($i);
      
      echo str_repeat(' ', 3 + $index);
      echo $letras[$total - 1 - $index];
  
      if ($index != $total - 1) {
          echo str_repeat(' ', (($total - 1 - $index) * 2) - 1);
          echo $letras[$total - 1 - $index];
      }
  
      echo PHP_EOL;
  }

?>
