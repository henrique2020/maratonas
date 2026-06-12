// Problema: 1258 - Camisetas | Resposta: Accepted
// Linguagem: C20++ [+0s]     | Tempo: 0.015s

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Camisa {
    string nome;
    string cor;
    char tam;
};

bool comparaCamisas(const Camisa& a, const Camisa& b) {
    if (a.cor != b.cor) return a.cor < b.cor;   // Ordenação pela cor
    if (a.tam != b.tam) return a.tam > b.tam;   // Ordenação pelo tamanho
    return a.nome < b.nome;
}

int main() {
    int n;
    bool first = true;
    while (cin >> n && n != 0) {
        if (!first) cout << "\n";
        first = false;

        vector<Camisa> camisas(n);

        for (int i = 0; i < n; i++) {
            cin.ignore();                   // Limpa o '\n'
            getline(cin, camisas[i].nome);  // Lê o nome com espaços
            cin >> camisas[i].cor >> camisas[i].tam;
        }

        sort(camisas.begin(), camisas.end(), comparaCamisas);

        for (int i = 0; i < n; i++) {
            cout << camisas[i].cor << " " << camisas[i].tam << " " << camisas[i].nome << "\n";
        }
    }

    return 0;
}