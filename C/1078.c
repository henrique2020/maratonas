// Problema: 1078 - Tabuada | Resposta: Accepted
// Linguagem: C99 [+0s]     | Tempo: 0.000s

#include <stdio.h>

int main() {
    int multiplicador;
    scanf("%d", &multiplicador);

    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", i, multiplicador, i*multiplicador);
    }

    return 0;
}