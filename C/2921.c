// Problema: 2921 - Quadros Alienígenas | Resposta: Accepted
// Linguagem: C99 [+0s]                 | Tempo: 0.734s

#include <stdio.h>

int grid[1000][1000]; 
long long row_sums[1000];

long long kadane(long long arr[], int n) {
    long long max_atual = -1000000000000000LL;
    long long current_max = -1000000000000000LL;
    
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
    int N;
    while (scanf("%d", &N) != EOF) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &grid[j][i]); 
            }
        }

        long long max_sub_rect = -1000000000000000LL; 
        for (int c1 = 0; c1 < N; c1++) {
            for (int i = 0; i < N; i++) {
                row_sums[i] = 0;
            }
            
            for (int c2 = c1; c2 < N; c2++) {
                // Acumula os valores na linha
                for (int i = 0; i < N; i++) {
                    row_sums[i] += grid[c2][i];
                }

                long long current_max = kadane(row_sums, N);
                if (current_max > max_sub_rect) {
                    max_sub_rect = current_max;
                }
            }
        }
        
        printf("%lld\n", max_sub_rect);
    }
    
    return 0;
}