#include <stdio.h>

int main () {
    int codigo, quantidade;
    float valor, total;
    for (int i=0; i<2; i++) {
        scanf("%d %d %f", &codigo, &quantidade, &valor);
        total += quantidade * valor; 
    }
    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}