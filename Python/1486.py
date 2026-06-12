# Problema: 1486 - Circuito Bioquímico Digital | Resposta: Accepted
# Linguagem: Python 3.11 [+1s]                 | Tempo: 0.324s

while True:
    p, n, c = map(int, input().split())
    if(p == 0 and n == 0 and c == 0): break
    
    sequencia = [0] * p
    palitos_validos = 0
    for _ in range(n):
        valores = list(map(int, input().split()))
        for i, v in enumerate(valores):               
                if v == 1: sequencia[i] += 1
                else:
                    if sequencia[i] >= c: 
                        palitos_validos += 1
                    sequencia[i] = 0
    
    for seq in sequencia:
        if seq >= c:
            palitos_validos += 1
            
    print(palitos_validos)