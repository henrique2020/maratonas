// Problema: 2157 - Sequência Espelho | Resposta: Accepted
// Linguagem: C20++ [+0s]             | Tempo: 0.000s

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int rep, B, E;

    cin >> rep;
    while (rep--) {
        cin >> B >> E;

        string sequencia = "";
        sequencia.reserve((E - B + 1) * 5); // Pr�-aloca 5 chars por n�mero

        for (int i = B; i <= E; i++) { sequencia += to_string(i); }
        cout << sequencia;
        reverse(sequencia.begin(), sequencia.end());
        cout << sequencia << "\n";
    }

    return 0;
}
