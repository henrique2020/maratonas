# Problema: 3306 - Consulta e Alteração | Resposta: Accepted
# Linguagem: Python 3.11 [+1s]          | Tempo: 0.051s

import sys
from math import gcd
from functools import reduce

entrada = sys.stdin.read().split()
 
param = int(entrada[0])
queries = int(entrada[1])

lista = [int(x) for x in entrada[2:param+2]]

it = iter(entrada[param+2:])
saida = []
for _ in range(queries):
    tipo = int(next(it))
    
    if tipo == 1:
        posIni = int(next(it)) - 1
        posFim = int(next(it))
        v = int(next(it))
        
        for i in range(posIni, posFim):
            lista[i] += v
            
    else:
        posIni = int(next(it)) - 1
        posFim = int(next(it))
        
        resultado = reduce(gcd, lista[posIni:posFim])
        saida.append(str(resultado))
            
sys.stdout.write('\n'.join(saida) + '\n')