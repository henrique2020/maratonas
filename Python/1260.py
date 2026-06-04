# Problema: 1260 - Espécies de Madeira | Resposta: Accepted
# Linguagem: Python 3.11 [+1s]         | Tempo: 1.676s

import sys

entradas = sys.stdin.read().splitlines()
casos = int(entradas.pop(0))
entradas.pop(0) #remover linha em branco
for caso in range(1, casos+1):
    arvores = {}
    for pos, linha in enumerate(entradas):
        if linha == "": 
            entradas = entradas[pos+1:]
            break
        
        if linha not in arvores: arvores[linha] = 1
        else: arvores[linha] += 1
        
    print("\n".join([f"{arvore} {arvores[arvore]/sum(arvores.values())*100:.4f}" for arvore in sorted(arvores.keys())]))
    if(caso != casos): print()