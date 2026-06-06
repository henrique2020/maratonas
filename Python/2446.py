# Problema: 2446 - Troco       | Resposta: Time limit exceeded
# Linguagem: Python 3.11 [+1s] | Tempo: 2.000s

valor = int(input().split()[0])
moedas = map(int, input().split())

dp = [False] * (valor + 1)
dp[0] = True 

for moeda in moedas:
    for i in range(valor, moeda - 1, -1):
        if dp[i - moeda]: dp[i] = True
            
    if dp[valor]: break

print("S" if dp[valor] else "N")