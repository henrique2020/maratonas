// Problema: 1258 - Camisetas | Resposta: Accepted
// Linguagem: C99 [+0s]       | Tempo: 0.000s

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BRANCO 0
#define VERMELHO 1
#define TAM_P 0
#define TAM_M 1
#define TAM_G 2

typedef struct {
    char nomes[60][100];    // Máximo de 60 alunos
    int qtd;
} Tamanho;

typedef struct {
    Tamanho tamanhos[3];    //P, M, G
} Cor;

typedef struct {
    Cor cores[2];           //branco, vermelho
} Camisas;

int ordena(const void *a, const void *b) { return strcmp((char *)a, (char *)b); }
int main() {
    int n, first = 1;
    while (scanf("%d", &n) == 1 && n != 0) {
        if (!first) printf("\n");
        first = 0;

        Camisas camisa = {0}; // Inicializa com todos os valores zerados

        for (int i = 0; i < n; i++) {
            char nome_tmp[100], cor_tmp[20], tam_tmp;

            getchar();                                  // Limpa o \n anterior
            fgets(nome_tmp, sizeof(nome_tmp), stdin);
            nome_tmp[strcspn(nome_tmp, "\r\n")] = '\0'; // Equivalente ao replace do Pythom

            scanf("%s %c", cor_tmp, &tam_tmp);
            int cor = (strcmp(cor_tmp, "branco") == 0) ? BRANCO : VERMELHO;
            int tam = (tam_tmp == 'P') ? TAM_P : (tam_tmp == 'M' ? TAM_M : TAM_G);

            int pos = camisa.cores[cor].tamanhos[tam].qtd;
            strcpy(camisa.cores[cor].tamanhos[tam].nomes[pos], nome_tmp);
            camisa.cores[cor].tamanhos[tam].qtd++;
        }

        char nomes_das_cores[2][20] = {"branco", "vermelho"};
        char nomes_dos_tamanhos[3] = {'P', 'M', 'G'};
        for (int c = 0; c < 2; c++) {
            for (int t = 0; t < 3; t++) {
                int qtde = camisa.cores[c].tamanhos[t].qtd;

                if (qtde > 0) {
                    qsort(camisa.cores[c].tamanhos[t].nomes, qtde, 100, ordena);
                    for (int k = 0; k < qtde; k++) {
                        printf("%s %c %s\n", nomes_das_cores[c], nomes_dos_tamanhos[t], camisa.cores[c].tamanhos[t].nomes[k]);
                    }
                }
            }
        }
    }

    return 0;
}