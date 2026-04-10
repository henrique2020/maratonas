// Problema: 3141 - Dúvida Etária | Resposta: Accepted
// Linguagem: C99 [+0s]           | Tempo: 0.000s

#include <stdio.h>
#include <string.h>

typedef struct data {
    int dia, mes, ano;
} DATA;

int main(){
    char nome[51];
    DATA nascimento, atual;
    int idade;
    
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    
    scanf("%d/%d/%d", &atual.dia, &atual.mes, &atual.ano);
    scanf("%d/%d/%d", &nascimento.dia, &nascimento.mes, &nascimento.ano);
    
    idade = atual.ano - nascimento.ano;
    if (
        atual.mes < nascimento.mes
        || (atual.mes == nascimento.mes && atual.dia < nascimento.dia)
    ) { idade--; }
    
    if (atual.mes == nascimento.mes && atual.dia == nascimento.dia ){
        printf("Feliz aniversario!\n");
    }

    printf("Voce tem %d anos %s.\n", idade, nome);

    return 0;
}
