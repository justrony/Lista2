#include <stdio.h>

int main() {

    int a=0, b=0;

        printf("Digite o valor de A: ");
        scanf("%d", &a);
        printf("Digite o valor de B: ");
        scanf("%d", &b);

        printf("Quadrados dos numeros inteiros mmltiplos de 4 entre %d e %d:\n", a, b);

        int inicio, fim;
        if (a < b) {
            inicio = a;
            fim = b;
        } else {
            inicio = b;
            fim = a;
        }


        for (int numero = inicio; numero <= fim; numero++) {
            if (numero % 4 == 0) {
                int quadrado = numero * numero;
                printf("%d^2 = %d\n", numero, quadrado);
            }
        }

    return 0;
}
