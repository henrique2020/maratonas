# Problema: 2025 - Joulupukki  | Resposta: Accepted
# Linguagem: Python 3.11 [+1s] | Tempo: 0.013s

import sys

entradas = sys.stdin.read().strip().split('\n')

saidas = []
for entrada in entradas[1:]:
    saida = []
    palavras = entrada.split()
    for p in palavras:
        if 'oulupukk' in p:
                pos = p.find('oulupukk')
                p = p[:pos-1] + 'Joulupukki' + p[pos+9:]
        saida.append(p)
    saidas.append(' '.join(saida))

sys.stdout.write('\n'.join(saidas)+'\n')