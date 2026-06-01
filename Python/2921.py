# Problema: 2921 - Quadros Alienígenas | Resposta: Runtime error
# Linguagem: Python 3.11 [+1s]         | Tempo: 0.000s

import sys

def kadane(arr):
    if not arr:
        return 0
    
    max_total = arr[0]
    max_atual = arr[0]
    
    for i in range(1, len(arr)):
        max_atual = max(arr[i], max_atual + arr[i])
        max_total = max(max_total, max_atual)
        
    return max_total


while True:
    line = sys.stdin.readline()
    if not line:
        break
    
    if not line.strip():
        continue
    N = int(line.strip())
    
    if N <= 0:
        continue
    
    grid = []
    for _ in range(N):
        grid.append(list(map(int, sys.stdin.readline().split())))
        
    max_sub_rect_sum = -float('inf')
    for c1 in range(N):
        temp_row_sums = [0] * N
        
        for c2 in range(c1, N):
            for i in range(N):
                temp_row_sums[i] += grid[i][c2]
            
            current_max_sum = kadane(temp_row_sums)
            max_sub_rect_sum = max(max_sub_rect_sum, current_max_sum)
    
    print(max_sub_rect_sum)