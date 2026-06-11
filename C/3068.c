// Problema: 3068 - Meteoros | Resposta: Accepted
// Linguagem: C99 [+0s]      | Tempo: 0.068s

#include <stdio.h>

int main(){
    int f_x1, f_y1, f_x2, f_y2,     // Localização da fazendo
        m_x, m_y;                   // Local da queda do meteoro

    int i = 1, quedas, acertos;
    while(1){
        scanf("%d %d %d %d", &f_x1, &f_y1, &f_x2, &f_y2);
        if(f_x1 == 0 && f_x1 == f_y1 && f_y1 == f_x2 && f_x2 == f_y2){
            break;
        }

        acertos = 0;
        scanf("%d", &quedas);
        while(quedas--){
            scanf("%d %d", &m_x, &m_y);
            if (
                f_x1 <= m_x && m_x <= f_x2 &&
                f_y2 <= m_y && m_y <= f_y1
            ) {
                acertos += 1;
            }
        }

        printf("Teste %d\n", i++);
        printf("%d\n", acertos);
    }

    return 0;
}