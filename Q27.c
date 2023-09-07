#include <stdio.h>

int main() {
    
    int numero,maior=0,menor=0,primeiro=1;

        while (1) {
            printf("Digite um numero: ");
            scanf("%d", &numero);

            if (numero < 0 && numero % 2 == 0) {
                break;
            }

            if (primeiro) {
                maior = numero;
                menor = numero;
                primeiro = 0;
            } else {
                if (numero > maior) {
                    maior = numero;
                }
                if (numero < menor) {
                    menor = numero;
                }
            }
        }

        if (!primeiro) { 
            int produto = maior * menor;
            printf("O produto do maior %d pelo menor %d numero : %d\n", maior, menor, produto);
        } else {
            printf("Nenhum numero foi inserido\n");
        }

    return 0;
}
