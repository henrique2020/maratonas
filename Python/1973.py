# Problema: 1973 - Jornada nas Estrelas | Resposta: Accepted
# Linguagem: Python 3.11 [+1s]          | Tempo: 0.581s

import sys

data = sys.stdin.read().split()
n = int(data[0])
carneiros = list(map(int, data[1:]))

primeiro_par = -1
for i in range(n):
    if carneiros[i] % 2 == 0:
        primeiro_par = i
        break

soma_total = sum(carneiros)

if primeiro_par == -1:
    estrelas_visitadas = n
    roubados = n
else:
    estrelas_visitadas = primeiro_par + 1
    roubados = primeiro_par + 1
    
    for i in range(primeiro_par):
        if carneiros[i] > 1:
            roubados += 1
            
print(f"{estrelas_visitadas} {soma_total - roubados}")