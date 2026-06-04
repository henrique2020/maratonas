# Problema: 3250 - Problema no Elevador | Resposta: Accepted
# Linguagem: Python 3.11 [+1s]          | Tempo: 0.403s

from collections import deque

def movimenta(andares, inicio, objetivo, sobe, desce):
    visitados = [False] * (andares + 1)
    visitados[inicio] = True
    
    fila = deque([(inicio, 0)]) 
    while fila:
        andar, movimentos = fila.popleft()
        if andar == objetivo:
            return movimentos
        
        prox_sobe = andar + sobe
        if prox_sobe <= andares and not visitados[prox_sobe]:
            visitados[prox_sobe] = True 
            fila.append((prox_sobe, movimentos + 1))
        
        prox_desce = andar - desce
        if prox_desce >= 1 and not visitados[prox_desce]:
            visitados[prox_desce] = True
            fila.append((prox_desce, movimentos + 1))
    
    return -1

andares, inicio, objetivo, sobe, desce = map(int, input().split())
movimentos = movimenta(andares, inicio, objetivo, sobe, desce)
print(movimentos if movimentos != -1 else "use the stairs")