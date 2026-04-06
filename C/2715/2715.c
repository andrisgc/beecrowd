#include <stdio.h>

int main () {
    int n, x, i;
    long long int soma_total, rangel, gugu;

    while (scanf("%d", &n) != EOF) {
        int vet[n];
        soma_total = 0;
        rangel = 0;
        gugu = 0;
        for (i=0; i<n; i++) {
            scanf("%d", &x);
            vet[i] = x;
            soma_total += x;
        }

        long long int dif, dif_min = soma_total;
        for (i=0; i<n; i++) {
            rangel += vet[i];
            gugu = soma_total - rangel;
            dif = rangel - gugu;
            
            if (dif < 0) dif = -dif; 
            
            if (dif < dif_min)
                dif_min = dif;
        }

        printf("%d\n", dif_min);
    }

    return 0;
}