# Problema: 2203 - Tempestade de Corvos | Resposta: Accepted
# Linguagem: Python 3.11 [+1s]          | Tempo: 0.026s

import math

while True:
    try: xf, yf, xi, yi, vi, r1, r2 = map(int, input().split())
    except: break
    
    distancia = math.hypot(xi - xf, yi - yf)
    distancia_fuga = distancia + (vi * 1.5)
    alcance = r1 + r2
    
    print("Y" if distancia_fuga <= alcance else "N")