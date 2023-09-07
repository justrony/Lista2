#include <stdio.h>

int main() {

    int a=0,b=0,soma=0;

        printf("Digite o valor de A: ");
        scanf("%d", &a);
        printf("Digite o valor de B: ");
        scanf("%d", &b);

        printf("Somatorio dos numeros pares na faixa de %d a %d:\n", a, b);

        int inicio, fim;
        if (a < b) {
            inicio = a;
            fim = b;
        } else {
            inicio = b;
            fim = a;
        }

        for (int numero = inicio; numero <= fim; numero++) {
            if (numero % 2 == 0) {
                soma += numero;
            }
        }

        printf("O somatorio dos numeros pares entre %d - %d : %d\n", inicio, fim, soma);

    return 0;
}
