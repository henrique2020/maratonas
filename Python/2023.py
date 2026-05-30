# Problema: 2023 - A Última Criança Boa | Resposta: Accepted
# Linguagem: Python 3.11 [+1s]          | Tempo: 0.000s

import sys

nomes = sys.stdin.read().splitlines()
nomes.sort(reverse=True, key=str.casefold)
print(nomes[0])