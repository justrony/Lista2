#include <stdio.h>

int main() {

    int n,maior,menor,primeiro=1; 

        printf("Digite um numero: ");
        scanf("%d", &n);

        if (n == 0) {
            printf("Nenhum numero foi fornecido\n");
            return 0;
        }

        maior = menor = n;
        primeiro = 0;

        while (n != 0) {
            if (n > maior) {
                maior = n;
            }
            if (n < menor) {
                menor = n;
            }

            printf("Digite outro numero: ");
            scanf("%d", &n);
        }

        if (primeiro) {
            printf("Nenhum numero inserido\n");
        } else {
            printf("O maior numero fornecido foi: %d\n", maior);
            printf("O menor numero fornecido foi: %d\n", menor);
        }

    return 0;
}
