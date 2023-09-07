#include <stdio.h>

int main() {
    
    int a=0,b=0,contador=0;

        printf("Digite o valor de A: ");
        scanf("%d", &a);
        printf("Digite o valor de B: ");
        scanf("%d", &b);

        printf("Quantidade de numeros divisiveis por 3 entre %d e %d:\n", a, b);

        int inicio, fim;
        if (a < b) {
            inicio = a;
            fim = b;
        } else {
            inicio = b;
            fim = a;
        }

        for (int numero = inicio; numero <= fim; numero++) {
            if (numero % 3 == 0) {
                contador++;
            }
        }

        printf("A quantidade de numeros divisiveis por 3 entre %d - %d : %d\n", inicio, fim, contador);

    return 0;
}
