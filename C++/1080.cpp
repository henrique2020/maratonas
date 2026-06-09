// Problema: 1080 - Maior e Posição | Resposta: Accepted
// Linguagem: C20++ [+0s]           | Tempo: 0.000s

#include <iostream>

int main() {
    int num, maior = -1, pos;

    for(int i = 0; i < 100; i++){
        std::cin >> num;
        if(num > maior){
            maior = num;
            pos = i + 1;
        }
    }

    std::cout << maior << "\n" << pos << "\n";
    return 0;
}