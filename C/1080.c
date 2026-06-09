// Problema: 1080 - Maior e Posição | Resposta: Accepted
// Linguagem: C99 [+0s]             | Tempo: 0.000s

#include <stdio.h>

int main() {
    int num, maior = -1, pos;

    for(int i = 0; i < 100; i++){
        scanf("%d", &num);
        if(num > maior){
            maior = num;
            pos = i + 1;
        }
    }

    printf("%d\n%d\n", maior, pos);
    return 0;
}