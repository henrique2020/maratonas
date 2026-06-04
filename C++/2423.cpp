// Problema: 2423 - Receita de Bolo | Resposta: Accepted
// Linguagem: C20++ [+0s]           | Tempo: 0.000s

#include <iostream>

using namespace std;
int main() {
    int x, o, c;
    cin >> x >> o >> c;
    int bolos[3] = {x/2, o/3, c/5};
    int minB = bolos[0];
    for (int i = 1; i < 3; i++) {
        if (bolos[i] < minB) {
            minB = bolos[i];
        }
    }
    cout << minB << endl;
    return 0;
}