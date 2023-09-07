#include <stdio.h>

int main() {
    
    int numero=0,contador=0;

        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);

        if (numero < 0) {
            numero = -numero;
        }

        while (numero > 0) {
            int digito = numero % 10;
            if (digito == 7) {
                contador++;
            }
            numero = numero / 10;
        }

        printf("O numero de digitos 7 no numero inteiro: %d\n", contador);

    return 0;
}
