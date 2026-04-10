// Problema: 2766 - Entrada e Saída Lendo e Pulando Nomes | Resposta: Accepted
// Linguagem: C99 [+0s]                                   | Tempo: 0.000s

#include <stdio.h>
#define QTDE 10
#define TAMANHO 31

int main(){
    char nome[QTDE][TAMANHO];
    
    for(int i = 0; i < QTDE; i++){
        scanf("%30s", nome[i]);
    }
    
    printf("%s\n%s\n%s\n", nome[2], nome[6], nome[8]);

    return 0;
}
