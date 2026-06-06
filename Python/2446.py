# Problema: 2446 - Troco       | Resposta: Accepted
# Linguagem: Python 3.11 [+1s] | Tempo: 0.022s

import sys

entrada = sys.stdin.read().split()    
valor = int(entrada[0])

dp = 1
bit_alvo = 1 << valor
possivel = False
for i in range(2, len(entrada)):
    moeda = int(entrada[i])
    dp |= (dp << moeda)
    if dp & bit_alvo:
        possivel = True
        break

print("S" if possivel else 'N')   