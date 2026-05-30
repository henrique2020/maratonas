# Problema: 1258 - Camisetas   | Resposta: Accepted
# Linguagem: Python 3.11 [+1s] | Tempo: 0.208ss

first = True
while (casos := int(input())) != 0:
    if not first: print()
    first = False

    camisas = {
        'branco': {'P': [], 'M': [], 'G': []}, 
        'vermelho': {'P': [], 'M': [], 'G': []}
    }
    
    for _ in range(casos):
        nome = input()
        cor, tamanho = input().split()
    
        camisas[cor][tamanho].append(nome)
        
        
    for cor in ['branco', 'vermelho']:
        for tamanho in ['P', 'M', 'G']:
            camisas[cor][tamanho].sort()
            for nome in camisas[cor][tamanho]:
                print(f"{cor} {tamanho} {nome}")