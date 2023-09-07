#include <stdio.h>

int main() {

    int inicio=0,fim=0,soma=0,contador=0;

        printf("Digite o valor de inicio da faixa: ");
        scanf("%d", &inicio);
        printf("Digite o valor de fim da faixa: ");
        scanf("%d", &fim);


        if (inicio > fim) {
            printf("O limite final não pode se rmaior que o incial\n");
            return 1;  
        }

        for (int numero = inicio; numero <= fim; numero++) {
            soma += numero;
            contador++;
        }

        double media = (double)soma / contador;

        printf("A media aritmetica dos numeros entre %d a %d : %.2lf\n", inicio, fim, media);

    return 0;
}
