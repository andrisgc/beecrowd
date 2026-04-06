#include <stdio.h>

int main () {
    double x;
    double vet[100];

    scanf("%lf", &x);

    for (int i=0; i<100; i++) {
        vet[i] = x;
        printf("N[%d] = %.4lf\n", i, vet[i]);
        x /= 2;
    }

    return 0;
}