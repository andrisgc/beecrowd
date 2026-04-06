#include <stdio.h>

int main() {

    int hi, mi, hf, mf, tf, ti;

    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    ti = hi * 60 + mi; 
    tf = hf * 60 + mf;

    if (ti>=tf) {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", ((1440 - ti) + tf)/60, ((1440 - ti) + tf)%60);
    } else {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (tf-ti)/60, (tf-ti)%60);
    }

    return 0;
}