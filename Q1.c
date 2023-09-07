#include <stdio.h>

int main() {

    int dia=0;

    while (1) {
        printf("Digite um numero de 1 a 7: ");
        scanf("%d", &dia);

        if (dia == 0) {
            break;
        } else if (dia >= 1 && dia <= 7) {
            switch (dia) {
                case 1:
                    printf("Domingo\n");
                    break;
                case 2:
                    printf("Segunda-feira\n");
                    break;
                case 3:
                    printf("Terça-feira\n");
                    break;
                case 4:
                    printf("Quarta-feira\n");
                    break;
                case 5:
                    printf("Quinta-feira\n");
                    break;
                case 6:
                    printf("Sexta-feira\n");
                    break;
                case 7:
                    printf("Sabado\n");
                    break;
            }
        } else {
            printf("Numero de dia nao valido\n");
        }
    }

    return 0;
}
