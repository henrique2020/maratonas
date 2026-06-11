// Problema: 1113 - Crescente e Decrescente | Resposta: Accepted
// Linguagem: C99 [+0s]                     | Tempo: 0.000s

#include <stdio.h>

int main(){
    int a, b;
    while(1){
        scanf("%d %d", &a, &b);
        if(a == b) break;

        printf("%s\n", (a > b) ? "Decrescente" : "Crescente");
    }

    return 0;
}