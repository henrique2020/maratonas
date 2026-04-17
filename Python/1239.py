# Problema: 1239 - Atalhos Bloggo | Resposta: Accepted
# Linguagem: Python 3.11 [+1s]    | Tempo: 0.081s

import sys

saida = []
for linha in sys.stdin:
    res = []
    italico = False
    negrito = False

    for c in linha:
        if c == '_':
            if italico: res.append('</i>')
            else: res.append('<i>')
            italico = not italico

        elif c == '*':
            if negrito: res.append('</b>')
            else: res.append('<b>')
            negrito = not negrito

        else: res.append(c)
        
    saida.append(''.join(res))

sys.stdout.write(''.join(saida))
