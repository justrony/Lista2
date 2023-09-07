#include <stdio.h>

int main() {

    double num1=0, num2=0, result=0;

        printf("Digite o primeiro valor: ");
        scanf("%lf", &num1);

        do {
            printf("Digite o segundo valor: ");
            scanf("%lf", &num2);

            if (num2 == 0) {
                printf("Divisao invalida\n");
            }
        } while (num2 == 0);

        result = num1 / num2;

        printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);

    return 0;
}
