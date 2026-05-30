# Problema: 2484 - Abracadabra | Resposta: Accepted
# Linguagem: Python 3.11 [+1s] | Tempo: 0.031s

import sys

for palavra in sys.stdin.read().splitlines():
    letras = len(palavra)
    espacos = 0
    
    while letras > 0:
        print(" " * espacos + " ".join(palavra[0:letras]))
        letras -= 1
        espacos += 1
        
    print()