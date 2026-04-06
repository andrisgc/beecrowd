#include <stdio.h>

int main() {

    int i, c=0, n;

    scanf("%d", &n);

    int vet[n];

    for (i=0; i<n; i++) {
        scanf("%d", &vet[i]);
    }

    for (i=0; i<n; i++) {
        if (i<(n-1)) {
            if (vet[i] != vet[i+1]) {
                c++;
            }
        }
    }    

    if (c != 0) {
        c++;
    }

    printf("%d\n", c);

    return 0;
}