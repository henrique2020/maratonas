// Problema: 1028 - Figurinhas | Resposta: Accepted
// Linguagem: C99 [+0s]        | Tempo: 0.000s

#include <stdio.h>

int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    int rep, a, b;
    scanf("%d", &rep);
    while(rep--){
        scanf("%d %d", &a, &b);
        printf("%d\n", gcd(a, b));
    }
    return 0;
}