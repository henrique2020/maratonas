# Problema: 2692 - Teclado Zoeiro | Resposta: Accepted
# Linguagem: Python 3.11 [+1s]    | Tempo: 0.000s

trocas, frases = map(int, input().split())
dicionario = {}
for _ in range(trocas):
    original, nova = input().split()
    dicionario[original] = nova
    dicionario[nova] = original

saidas = []
for _ in range(frases):
    frase = input()
    
    saida = [dicionario.get(l, l) for l in frase]    
    saidas.append(''.join(saida))

print('\n'.join(saidas))