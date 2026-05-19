// Problema: 1006 - Média 2 | Resposta: Accepted
// Linguagem: C20++ [+0s]   | Tempo: 0.000s

#include <iostream>

int main() {
    double n1, n2, n3, media;

    std::cin >> n1 >> n2 >> n3;
    media = ((n1*2)+(n2*3)+(n3*5))/10;
    printf("MEDIA = %.1f\n", media);

    return 0;
}