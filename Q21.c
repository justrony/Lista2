#include <stdio.h>

int main() {

    int numero, original, reverso = 0;

        printf("Digite um numero de cinco digitos: ");
        scanf("%d", &numero);

        original = numero;

        if (numero < 10000 || numero > 99999) {
            printf("numero invalido\n");
            return 1;
        }

        while (numero > 0) {
            int digito = numero % 10;
            reverso = (reverso * 10) + digito;
            numero = numero / 10;
        }


        if (original == reverso) {
            printf("O numero %d é um palindromo.\n", original);
        } else {
            printf("O numero %d nao é um palindromo.\n", original);
        }

    return 0;
}
