#include <stdio.h>

int main() {

    int n=0,sinal=1;
    double pi=0;

        printf("Termos\tValor Aproximado\n");

        for (n = 1; n <= 100; n += 2) {
            pi += (double)sinal * 4 / n;
            printf("%d\t%.10lf\n", (n + 1) / 2, pi);

            sinal = -sinal;
        }

    return 0;
}
