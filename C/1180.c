// Problema: 1180 - Menor e Posição | Resposta: Accepted
// Linguagem: C99 [+0s]             | Tempo: 0.000s

#include <stdio.h>
#define INF 999999999

typedef struct menor {
    int valor;
    int posicao;
} MENOR;

int main() {
    int numeros, valor;
    scanf("%d", &numeros);

    MENOR menor;
    menor.valor = INF;

    for(int i = 0; i < numeros; i++){
        scanf("%d", &valor);
        if(valor < menor.valor){
            menor.valor = valor;
            menor.posicao = i;
        }
    }
    printf("Menor valor: %d\n", menor.valor);
    printf("Posicao: %d\n", menor.posicao);
    return 0;
}
