# Problema: 3109 - Trocando de Mesa | Resposta: Accepted
# Linguagem: Python 3.11 [+1s]      | Tempo: 0.332s

mesas = [i for i in range(int(input()) + 1)]
updates = []
for _ in range(int(input())):
    evento = list(map(int, input().split()))
    
    if evento[0] == 1: # Evento de update
        f1, f2 = evento[1::]
        mesas[f1], mesas[f2] = mesas[f2], mesas[f1]
        
    else: # Evento de consulta
        f = evento[1]
        redirecionamentos = 0
        atual = f
        
        while mesas[atual] != f:
            redirecionamentos += 1
            atual = mesas[atual]
            
        print(redirecionamentos)