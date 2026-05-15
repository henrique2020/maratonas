// Problema: 1078 - Tabuada | Resposta: Accepted
// Linguagem: C20++ [+0s]   | Tempo: 0.000s

#include <iostream>

int main() {
    int multiplicador;
    std::cin >> multiplicador;

    for(int i = 1; i <= 10; i++){
        std::cout << i << " x " << multiplicador << " = " << i * multiplicador << '\n';
    }

    return 0;
}