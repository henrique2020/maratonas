// Problema: 2417 - Campeonato  | Resposta: Accepted
// Linguagem: PHP (8.1.2) [+1s] | Tempo: 0.059s

<?php
[$Cv, $Ce, $Cs, $Fv, $Fe, $Fs] = array_map('intval', explode(' ', trim(fgets(STDIN))));
$Cp = ($Cv * 3) + $Ce;
$Fp = ($Fv * 3) + $Fe;

if ($Cp == $Fp) {
    $Cp += $Cs;
    $Fp += $Fs;
}

echo (($Cp > $Fp) ? 'C' : (($Cp < $Fp) ? 'F' : '=')) . PHP_EOL;
?>
