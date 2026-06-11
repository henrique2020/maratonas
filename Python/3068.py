# Problema: 3068 - Meteoros    | Resposta: Time limit exceeded
# Linguagem: Python 3.11 [+1s] | Tempo: 2.000s

class Coordenadas():
    def __init__(self, x: int, y: int):
        self.x = x
        self.y = y

class Fazenda():
    def __init__(self, ini: Coordenadas, fim: Coordenadas):
        self.localizacao = tuple((i, j) for i in range(ini.x, fim.x + 1) for j in range(fim.y, ini.y + 1))
        
    def acerto(self, meteoro: Coordenadas):
        return (meteoro.x, meteoro.y) in self.localizacao

caso = 1;
while True:
    pontos = list(map(int, input().split()))
    if(sum(pontos) == 0): break
    
    f = Fazenda(
        Coordenadas(pontos[0], pontos[1]), 
        Coordenadas(pontos[2], pontos[3])
    )
    
    acertos = 0
    for _ in range(int(input())):
        meteoro = Coordenadas(*list(map(int, input().split())))
        if f.acerto(meteoro):
            acertos += 1
    
    print(f"Teste {caso}")
    print(f"{acertos}")
    
    caso += 1
