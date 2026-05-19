// Problema: 1005 - Média 1 | Resposta: Accepted
// Linguagem: C20++ [+0s]   | Tempo: 0.000s

#include <iostream>

int main() {
    double n1, n2, media;

    std::cin >> n1 >> n2;
    media = ((n1*3.5)+(n2*7.5))/11;
    printf("MEDIA = %.5f\n", media);

    return 0;
}
