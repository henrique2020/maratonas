// Problema: 2423 - Receita de Bolo | Resposta: Accepted
// Linguagem: C99 [+0s]             | Tempo: 0.000s

#include <stdio.h>

int main() {
    int x, o, c;
    scanf("%d %d %d", &x, &o, &c);
    int bolos[3] = {x/2, o/3, c/5};
    int minB = bolos[0];
    for (int i = 1; i < 3; i++) {
        if (bolos[i] < minB) {
            minB = bolos[i];
        }
    }
    printf("%d\n", minB);
    return 0;
}