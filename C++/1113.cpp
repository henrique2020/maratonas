// Problema: 1113 - Crescente e Decrescente | Resposta: Accepted
// Linguagem: C20++ [+0s]                   | Tempo: 0.000s

#include <iostream>

int main() {
    int a, b;
    while(true){
        std::cin >> a >> b;
        if(a == b) break;
        std::cout << ((a > b) ? "Decrescente" : "Crescente") << "\n";
    }

    return 0;
}