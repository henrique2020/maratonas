// Problema: 1078 - Tabuada | Resposta: Compilation error
// Linguagem: C20++ [+0s]   | Tempo: 0.000s

#include <iostream>
#include <format>

int main() {
    int multiplicador;
    std::cin >> multiplicador;

    for(int i = 1; i <= 10; i++){
        std::cout << std::format(
            "{} x {} = {}\n",
            i, multiplicador, i * multiplicador
        );
    }

    return 0;
}