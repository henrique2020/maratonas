// Problema: 2921 - Quadros Alienígenas | Resposta: Accepted
// Linguagem: C++20 [+0s]               | Tempo: 0.788s

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const long long MIN_INF = -1e15; 
int grid[1000][1000];
long long row_sums[1000];

inline long long kadane(const long long arr[], int n) {
    long long max_atual = MIN_INF;
    long long current_max = MIN_INF;

    for (int i = 0; i < n; i++) {
        if (max_atual > 0) {
            max_atual += arr[i];
        } else {
            max_atual = arr[i];
        }

        if (max_atual > current_max) {
            current_max = max_atual;
        }
    }
    return current_max;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    while (cin >> N) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> grid[j][i];
            }
        }

        long long max_sub_rect = MIN_INF;
        for (int c1 = 0; c1 < N; c1++) {
            fill(row_sums, row_sums + N, 0);

            for (int c2 = c1; c2 < N; c2++) {
                for (int i = 0; i < N; i++) {
                    row_sums[i] += grid[c2][i];
                }

                long long current_max = kadane(row_sums, N);
                if (current_max > max_sub_rect) {
                    max_sub_rect = current_max;
                }
            }
        }
        cout << max_sub_rect << "\n";
    }
    return 0;
}