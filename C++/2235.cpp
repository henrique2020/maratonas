// Problema: 22235 - Andando no Tempos | Resposta: Accepted
// Linguagem: C20++ [+0s]              | Tempo: 0.000s

#include <iostream>

using namespace std;
int main() {
    int c1, c2, c3;
    cin >> c1 >> c2 >> c3;

    cout << ((
            c1 == c2 || c1 == c3 || c2 == c3 
            || c1 + c2 == c3 || c2 + c3 == c1 || c3 + c1 == c2
        ) ? 'S' : 'N') << '\n';
    
    return 0;
}
    