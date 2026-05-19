// Problema: 1008 - Salário | Resposta: Accepted
// Linguagem: C20++ [+0s]   | Tempo: 0.000s

#include <iostream>

using namespace std;
int main() {
    int n, h;
    float v, salario;

    cin >> n >> h >> v;
    salario = h*v;

    cout << "NUMBER = " << n << endl;
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}