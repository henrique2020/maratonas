// Problema: 1158 - Soma de Ímpares Consecutivos III | Resposta: Accepted
// Linguagem: C20++ [+0s]                            | Tempo: 0.000s

#include <iostream>

using namespace std;
int main(){
    int rep, x, y, soma;
    cin >> rep;
    
    while(rep--){
        soma = 0;
        cin >> x >> y;
        if(x%2 == 0) x++;

        while(y--){
            soma += x;
            x += 2;
        }

        cout << soma << endl;
    }
    
    return 0;
}