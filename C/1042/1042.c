#include <stdio.h>

int main () {
    int vet[3], vet_ord[3];
    for (int i=0; i<3; i++) {
        scanf("%d", &vet[i]);
        vet_ord[i] = vet[i];
    }

    for (int i=0; i<2; i++) { // Selection Sort
        int min = i;
        for (int j=i+1; j<3; j++)
            if (vet_ord[j] < vet_ord[min]) min = j;
        int aux = vet_ord[i];
        vet_ord[i] = vet_ord[min];
        vet_ord[min] = aux;
    }

    for (int i=0; i<3; i++) printf("%d\n", vet_ord[i]);
    printf("\n");
    for (int i=0; i<3; i++) printf("%d\n", vet[i]);

    return 0;
}