// Problema: 1052 - Mês   | Resposta: Accepted
// Linguagem: C20++ [+0s] | Tempo: 0.000s

#include <iostream>
#include <array>
#include <string>

int main() {
    std::array<std::string, 12> meses = {
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };

    int mes;
    std::cin >> mes;

    std::cout << meses[mes - 1] << '\n';

    return 0;
}