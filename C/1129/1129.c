#include <stdio.h>

int main () {
    int x;

    scanf("%d", &x);
    while (x != 0) {
        for (int i=0; i<x; i++) {
            int cont = 0;
            int vet[5];
        
            for (int j=0; j<5; j++) {
                scanf("%d", &vet[j]);
                if (vet[j] <= 127) cont++;
            }
            
            if (cont != 1)
                printf("*\n");
            else {
                for (int k=0; k<5; k++) {
                    if (vet[k] <= 127) {
                        switch (k) {
                            case 0:
                                printf("A\n");
                                break;
                            case 1:
                                printf("B\n");
                                break;
                            case 2:
                                printf("C\n");
                                break;
                            case 3:
                                printf("D\n");
                                break;
                            case 4:
                                printf("E\n");
                                break;
                            default:
                                break;
                        }
                    }
                }
            }
        }
        scanf("%d", &x);
    }

    return 0;
}