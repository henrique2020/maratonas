# Problema: 2681 - Macacos da Torre de Hanoi | Resposta: Accepted
# Linguagem: Python 3.11 [+1s]               | Tempo: 0.000s

import sys
MOD = 86400 #Segundos em um dia

entrada = sys.stdin.read().split()
for val in entrada:
    n = int(val)
    s = (pow(2, n, MOD) - 1) % MOD
    
    horas = s // 3600
    resto = s % 3600
    minutos = resto // 60
    segundos = resto % 60
    
    print(f'{horas:02d}:{minutos:02d}:{segundos:02d}')