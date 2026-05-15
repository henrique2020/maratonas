// Problema: 1052 - Mês | Resposta: Accepted
// Linguagem: C99 [+0s] | Tempo: 0.000s

#include <stdio.h>
 
int main() {
    const char *meses[12] = {
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };

    int mes;
    scanf("%d", &mes);

    printf("%s\n", meses[mes-1]);

    return 0;
}