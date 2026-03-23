# Problema: 1109 - Burlando a Maratona | Resposta: Time limit exceeded
# Linguagem: Python 3.11 [+1s]         | Tempo: 2.000s

import re
import sys

entradas = sys.stdin.read().splitlines()
i = 0
n = len(entradas)
out = []

while i < n:
    regex = re.compile(entradas[i].replace('.', ''))
    i += 1

    testes = int(entradas[i])
    i += 1

    for j in range(i, i + testes):
        out.append("Y" if regex.fullmatch(entradas[j]) else "N")
    
    i += testes
    out.append('')

sys.stdout.write("\n".join(out))
