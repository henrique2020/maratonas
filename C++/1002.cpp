// Problema: 1002 - Área do Círculo | Resposta: Accepted
// Linguagem: C20++ [+0s]           | Tempo: 0.000s

#include <iostream>

const double PI = 3.14159;
int main() {
    double r, A;

    std::cin >> r;
    A = PI * r * r;
    printf("A=%.4f\n", A);

    return 0;
}
