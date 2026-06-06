// Problema: 1158 - Soma de Ímpares Consecutivos III | Resposta: Accepted
// Linguagem: C99 [+0s]                              | Tempo: 0.000s

#include <stdio.h>

int main(){
    int rep, x, y, soma;
    scanf("%d", &rep);
    for(int i = 0; i < rep; i++){
        soma = 0;
        scanf("%d %d", &x, &y);
        if(x % 2 == 0) x++;

        for(int v = x, p = 0; p < y; v += 2, p++){
            soma += v;
        }
        printf("%d\n", soma);
    }

    return 0;
}