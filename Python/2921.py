# Problema: 2921 - Quadros Alienígenas | Resposta: Time limit exceeded
# Linguagem: Python 3.11 [+1s]         | Tempo: 14.000s

import sys

def kadane(arr):
    if not arr: return 0
    max_total = max_atual = arr[0]
    for i in range(1, len(arr)):
        max_atual = max(arr[i], max_atual + arr[i])
        max_total = max(max_total, max_atual)
    return max_total

tokens = sys.stdin.read().split()
it = iter(tokens)
while True:
    try: n_str = next(it)
    except StopIteration: break
        
    N = int(n_str)
    if N <= 0: continue
        
    # LEITURA BLINDADA DA MATRIZ
    grid = []
    for _ in range(N):
        linha = []
        for _ in range(N):
            # Puxa exatamente N números, não importa em qual linha estejam no arquivo
            linha.append(int(next(it)))
        grid.append(linha)
        
    max_sub_rect_sum = -float('inf')
    for c1 in range(N):
        temp_row_sums = [0] * N
        
        for c2 in range(c1, N):
            for i in range(N):
                temp_row_sums[i] += grid[i][c2]

            current_max_sum = kadane(temp_row_sums)
            max_sub_rect_sum = max(max_sub_rect_sum, current_max_sum)
            
    print(max_sub_rect_sum)