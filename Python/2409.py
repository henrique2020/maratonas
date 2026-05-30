# Problema: 2409 - Colchão     | Resposta: Accepted
# Linguagem: Python 3.11 [+1s] | Tempo: 0.000s

colchao = list(map(int, input().split()))
porta = list(map(int, input().split()))

colchao.sort(reverse=True)
porta.sort(reverse=True)

if(
    (colchao[0] <= porta[0] and colchao[1] <= porta[1])
    or (colchao[-2] <= porta[0] and colchao[-1] <= porta[1])
   ): print("S")
else: print("N")