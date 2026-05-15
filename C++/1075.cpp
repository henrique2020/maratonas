// Problema: 1075 - Resto 2 | Resposta: Accepted
// Linguagem: C20++ [+0s]   | Tempo: 0.000s

#include <iostream>
#define MAX 10000

int main() {
    int divisor;
    std::cin >> divisor;

    for (int i = 2; i < MAX; i += divisor) {
        std::cout << i << '\n';
    }

    return 0;
}