#include <stdio.h>

int main() {
    int x, n;
    
    long long int vet[61];
    vet[0] = 0;
    vet[1] = 1;

    for (int i = 2; i<=60; i++) {
        vet[i] = vet[i-1] + vet[i-2];
    }

    scanf("%d", &x);
    for (int i = 0; i<x; i++) {
        scanf("%d", &n);
        printf("Fib(%d) = %lld\n", n, vet[n]);
    }

    return 0;
}