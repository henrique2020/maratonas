# Problema: 2921 - Quadros Alienígenas | Resposta: Time limit exceeded
# Linguagem: Python 3.11 [+1s]         | Tempo: 14.000s

import sys
from itertools import accumulate, chain
from operator import sub

it = iter(map(int, sys.stdin.read().split()))
while True:
    try: N = next(it)
    except StopIteration: break
        
    # Monta a matriz original
    grid = []
    for _ in range(N):
        grid.append([next(it) for _ in range(N)])
        
    # 1. Precomputação das somas de prefixos por linha (Horizontal Prefix Sum)
    # P[r][c] guardará a soma da linha 'r' até a coluna 'c'
    P = [[0] + list(accumulate(row)) for row in grid]
    
    # Rotaciona a matriz de prefixos para acesso colunar em O(1)
    # Isso gera tuplas, que são mais rápidas para iteração do que listas
    P_cols = list(zip(*P))
    
    max_sub_rect = -10**15
    
    for c1 in range(N):
        col1 = P_cols[c1]
        for c2 in range(c1, N):
            col2 = P_cols[c2+1]
            
            # 2. Obtém a soma das linhas no intervalo [c1, c2] usando C interno (map)
            # E imediatamente calcula o prefix sum vertical (accumulate)
            pref = list(accumulate(map(sub, col2, col1)))
            
            # 3. Kadane Vetorizado em C:
            # Subtrai do prefixo atual o menor prefixo anterior.
            # Tudo isso ocorre no backend do Python, sem loops no bytecode.
            current_max = max(map(sub, pref, accumulate(chain([0], pref), min)))
            
            if current_max > max_sub_rect:
                max_sub_rect = current_max
                
    print(max_sub_rect)