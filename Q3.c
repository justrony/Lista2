#include <stdio.h>

int main() {

    int F=0;
    unsigned long long fatorial = 1;

        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &F);

        if (F < 0) {
            printf("Numero inavalido\n");
        } else {

            for (int i = 1; i <= F; i++) {
                fatorial *= i;
            }

            printf("%d! = %llu\n", F, fatorial);
        }

    return 0;
}
