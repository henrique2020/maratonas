// Problema: 1847 - Bem-vindos e Bem-vindas ao Inverno! | Resposta: Accepted
// Linguagem: C99 [+0s]                                 | Tempo: 0.000s

#include <stdio.h>

int main() {
    int d1, d2, d3;
    scanf("%d %d %d", &d1, &d2, &d3);

    if(
        (d1 > d2 && d3 >= d2)
        || (d2 > d1 && d3 > d2 && (d3 - d2) >= (d2 - d1))
        || (d1 > d2 && d2 > d3 && (d1 - d2) > (d2 - d3))
        || (d2 == d1 && d3 > d2)
    ) {
        printf(":)\n");
    } else {
        printf(":(\n");
    }

    return 0;
}
