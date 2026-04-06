#include <stdio.h>

int main () {
    int i, q, cont=1;

    scanf("%d", &q);
    int vet[q];
    for (i=0; i<q; i++) {
        scanf("%d", &vet[i]);
    }

    for (i=0; i<q-1; i++) {
        int min = i;
        for (int j = i+1; j < q; j++) {
            if (vet[j] < vet[min])
                min = j;
        }
        int aux = vet[i];
        vet[i] = vet[min];
        vet[min] = aux;
    }

    for (i=0; i<q; i++) {
        if (vet[i+1] == vet[i])
            cont++;
        else {
            printf("%d aparece %d vez(es)\n", vet[i], cont);
            cont = 1;
        }
    }

    return 0;
}