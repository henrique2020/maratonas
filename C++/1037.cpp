// Problema: 1037 - Intervalo | Resposta: Accepted
// Linguagem: C20++ [+0s]     | Tempo: 0.000s

#include <iostream>

using namespace std;
int main(){
    string respostas[] = {
        "Intervalo [0,25]",
        "Intervalo (25,50]",
        "Intervalo (50,75]",
        "Intervalo (75,100]",
        "Fora de intervalo"
    };
    int pos = 4;
    
    float num;
    std::cin >> num;
    if(num >= 0 && num <= 100){
        if(num <= 25) pos = 0;
        else if(num <= 50) pos = 1;
        else if(num <= 75) pos = 2;
        else pos = 3;
    }
    
    cout << respostas[pos] << endl;
    
    return 0;
}