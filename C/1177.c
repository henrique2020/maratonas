// Problema: 1177 - Preenchimento de Vetor II | Resposta: Accepted
// Linguagem: C99 [+0s]                       | Tempo: 0.000s

#include <stdio.h>

int main() {
    int v, i;
    scanf("%d", &v);

    for (i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, i % v);
    }

    return 0;
}