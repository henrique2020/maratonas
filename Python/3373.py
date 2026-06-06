# Problema: 3373 - Criptografia Da Vinci’s | Resposta: Runtime error
# Linguagem: Python 3.11 [+1s]             | Tempo: 0.000s

import sys

linhas = sys.stdin.read().strip().split('\n')
i = 1
while i < len(linhas):
    linha = linhas[i].strip()
    if not linha:
        i += 1
        continue
    
    criptografia = []
    ids = -1
    [_, desbloqueio, segredo] = linha.split()
    for l in range(len(desbloqueio)):
        i += 1
        palavra = linhas[i]
        
        idd = palavra.index(desbloqueio[l])
        aux = palavra[idd+1:] + palavra[:idd]
        criptografia.append(aux)
        
        if segredo[l] != '_':
            ids = aux.index(segredo[l])

    saida = [c[ids] for c in criptografia]
    print(''.join(saida))
    i+= 1