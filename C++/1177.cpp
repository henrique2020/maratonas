// Problema: 1177 - Preenchimento de Vetor II | Resposta: Accepted
// Linguagem: C20++ [+0s]                     | Tempo: 0.000s

#include <iostream>

int main() {
    int v;
    std::cin >> v;

    for (int i = 0; i < 1000; i++) {
        std::cout << "N[" << i << "] = " << (i % v) << "\n";
    }

    return 0;
}