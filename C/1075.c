// Problema: 1075 - Resto 2 | Resposta: Accepted
// Linguagem: C99 [+0s]     | Tempo: 0.000s

#include <stdio.h>
#define MAX 10000

int main() {
    int divisor;
    scanf("%d", &divisor);

    for(int i = 2; i < MAX; i += divisor){
        printf("%i\n", i);
    }

    return 0;
}