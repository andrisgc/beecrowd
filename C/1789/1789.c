#include <stdio.h>

int main () {
    int qnt, vel;
    while (scanf("%d", &qnt) != EOF) {
        int maior = 0;
        for (int i=0; i<qnt; i++) {
            scanf("%d", &vel);
            if (vel > maior)
                maior = vel;
        }
        
        if (maior < 10)
            printf("1\n");
        else if (maior >= 10 && maior < 20)
            printf("2\n");
        else
            printf("3\n");
    }

    return 0;
}