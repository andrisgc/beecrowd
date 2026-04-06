#include <stdio.h>

int main() {

    int t, i, vet[5], c;

    scanf("%d", &t);

    c = 0;
    for (i=0; i<5; i++) {
        scanf("%d", &vet[i]);
        if (vet[i] == t) {
            c++;
        }
    }

    printf("%d\n", c);

    return 0;
}