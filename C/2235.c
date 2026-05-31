// Problema: 2235 - Andando no Tempo | Resposta: Accepted
// Linguagem: C99 [+0s]              | Tempo: 0.000s

#include <stdio.h>

int main() {
    int c1, c2, c3;
    scanf("%d %d %d", &c1, &c2, &c3);
    
    if(
           c1 == c2
        || c1 == c3
        || c2 == c3
        || c1 + c2 == c3
        || c2 + c3 == c1
        || c3 + c1 == c2
        
    ) { printf("S\n"); }
    else { printf("N\n"); }

    return 0;
}