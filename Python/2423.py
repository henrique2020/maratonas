# Problema: 2423 - Receita de Bolo | Resposta: Accepted
# Linguagem: Python 3.11 [+1s]     | Tempo: 0.000s

x, o, c = map(int, input().split())
bolos = [x//2, o//3, c//5]
print(min(bolos))