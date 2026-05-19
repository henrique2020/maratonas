// Problema: 1009 - Salário com Bônus | Resposta: Accepted
// Linguagem: C20++ [+0s]             | Tempo: 0.000s

#include <iostream>

int main() {
    char n[20];
    double s, v, salario;

    std::cin >> n >> s >> v;

    salario = s + (v * 0.15);
    printf("TOTAL = R$ %.2f\n", salario);

    return 0;
}