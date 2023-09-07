#include <stdio.h>

int main() {

    int numero=0;

        printf("Digite um numero inteiro para a tabuada: ");
        scanf("%d", &numero);

        printf("Tabuada do %d:\n", numero);

        for (int i = 1; i <= 10; i++) {
            int resultado = numero * i;
            printf("%d x %d = %d\n", numero, i, resultado);
        }

    return 0;
}
