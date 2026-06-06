# Problema: 3373 - Criptografia Da Vinci’s | Resposta: Runtime error
# Linguagem: Python 3.11 [+1s]             | Tempo: 0.000s

import sys

entradas = sys.stdin.read().split()
it = iter(entradas)
next(it) # Casos de teste, não utilizado
while True:
    try:
        next(it) 
        desbloqueio = next(it)
        segredo = next(it)
    except StopIteration:
        break
        
    criptografia = []
    ids = -1
    for l in range(len(desbloqueio)):
        palavra = next(it)
        
        idd = palavra.index(desbloqueio[l])
        aux = palavra[idd+1:] + palavra[:idd+1]
        criptografia.append(aux)
        
        if segredo[l] != '_':
            ids = aux.index(segredo[l])
            
    saida = [c[ids] for c in criptografia]
    print(''.join(saida))