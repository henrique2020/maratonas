// Problema: 3068 - Meteoros | Resposta: Accepted
// Linguagem: C++20 [+0s]    | Tempo: 0.247s

#include <iostream>

using namespace std;
int main() {
    int i = 1, meteoros, acertos,
        f_x1, f_y1, f_x2, f_y2,
        m_x, m_y;

    while(true){
        cin >> f_x1 >> f_y1 >> f_x2 >> f_y2;
        if((f_x1 + f_y1 + f_x2 + f_y2) == 0) break;

        acertos = 0;
        cin >> meteoros;
        while(meteoros--){
            cin >> m_x >> m_y;
            if((f_x1 <= m_x && m_x <= f_x2) && (f_y2 <= m_y && m_y <= f_y1))
                acertos++;
        }

        cout << "Teste " << i++ << endl << acertos << endl;
    }

    return 0;
}