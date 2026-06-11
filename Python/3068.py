# Problema: 3068 - Meteoros    | Resposta: Accepted
# Linguagem: Python 3.11 [+1s] | Tempo: 0.423s

import sys

it = iter(sys.stdin.read().splitlines())

saidas = []
caso = 1
while True:
    try: linha = next(it)
    except StopIteration: break

    f_x1, f_y1, f_x2, f_y2 = map(int, linha.split())
    
    if f_x1 == 0 and f_y1 == 0 and f_x2 == 0 and f_y2 == 0: 
        break
    
    acertos = 0
    for _ in range(int(next(it))):
        m_x, m_y = map(int, next(it).split())
        if f_x1 <= m_x <= f_x2 and f_y2 <= m_y <= f_y1:
            acertos += 1
    
    saidas.append(f"Teste {caso}")
    saidas.append(str(acertos))
    
    caso += 1
        
sys.stdout.write("\n".join(saidas) + "\n")
