// Problema: 1010 - Cálculo Simples | Resposta: Accepted
// Linguagem: C20++ [+0s]           | Tempo: 0.000s

#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    int cp1, cp2, np1, np2;
    float vp1, vp2, valor;

    cin >> cp1 >> np1 >> vp1;
    cin >> cp2 >> np2 >> vp2;

    valor = (np1*vp1)+(np2*vp2);
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << valor << endl;
    return 0;
}
