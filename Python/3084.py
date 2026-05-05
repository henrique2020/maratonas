# Problema: 3084 - Relógio Antigo | Resposta: Accepted
# Linguagem: Python 3.11 [+1s]    | Tempo: 0.000s

import sys

ANGULOS = {
    'hora': 360/12,
    'minuto': 360/60
}

entradas = sys.stdin.read().splitlines()
for entrada in entradas:
    h, m = map(int, entrada.split())
    print(f"{int(h/ANGULOS['hora']):02d}:{int(m/ANGULOS['minuto']):02d}")
