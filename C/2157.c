// Problema: 2157 - Sequência Espelho | Resposta: Accepted
// Linguagem: C99 [+0s]               | Tempo: 0.000s

#include <stdio.h>
#include <string.h>

int main() {
    int rep, B, E;
    char buffer[6];

    scanf("%d", &rep);
    while (rep--) {
        scanf("%d %d", &B, &E);
        for (int i = B; i <= E; i++) { printf("%d", i); }

        for (int i = E; i >= B; i--) {
            sprintf(buffer, "%d", i);
            int len = strlen(buffer);

            for (int j = len - 1; j >= 0; j--) { putchar(buffer[j]); }
        }

        putchar('\n');
    }

    return 0;
}