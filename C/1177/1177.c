#include <stdio.h>

int main () {
    int x;
    int vet[1000];
    scanf("%d", &x);

    for (int i=0; i<1000;) {
        for (int j=0; j<x; j++) {
            if (i<1000) {
                vet[i] = j;
                printf("N[%d] = %d\n", i, vet[i]);
                i++;
            }
        }
    }

    return 0;
}