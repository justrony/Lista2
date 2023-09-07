#include <stdio.h>

int main() {

    double valor_mercadoria=0, entrada=0, prestacao=0;

        printf("Digite o valor da mercadoria: R$ ");
        scanf("%lf", &valor_mercadoria);


        if (valor_mercadoria <= 0) {
            printf("O valor da mercadoria não pode ser 0\n");
            return 1;  
        }

        entrada = valor_mercadoria / 3;

        if (entrada != (int)entrada) {
            entrada = (int)entrada + 1;
        }

        prestacao = entrada;

        printf("Valor da entrada: R$ %.2lf\n", entrada);
        printf("Valor das duas prestaçoes: R$ %.2lf\n", prestacao);

    return 0;
}
