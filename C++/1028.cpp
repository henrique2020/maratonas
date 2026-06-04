// Problema: 1028 - Figurinhas | Resposta: Accepted
// Linguagem: C20++ [+0s]      | Tempo: 0.132s

#include <iostream>
#include <numeric>

using namespace std;
int main() {
    int rep, a, b;
    cin >> rep;
    for(int i = 0; i < rep; i++) {
        cin >> a >> b;
        cout << std::gcd(a, b) << endl;
    }
    
    return 0;
}