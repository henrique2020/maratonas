# Problema: 1259 - Pares e Ímpares | Resposta: Accepted
# Linguagem: Python 3.11 [+1s]     | Tempo: 0.103s

import sys

entradas = list(map(int, sys.stdin.read().splitlines()))
entradas.pop(0) #Remove a linha da quantidade

pares = []
impares = []
for n in entradas:
    if n % 2 == 0: pares.append(n)
    else: impares.append(n)
   
pares.sort()
impares.sort(reverse=True)
print("\n".join(map(str, pares + impares)))