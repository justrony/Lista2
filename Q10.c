#include <stdio.h>

int main() {
    
    printf("Quadrados dos números inteiros múltiplos de 4 entre 15 e 90:\n");

    for (int numero = 16; numero <= 90; numero += 4) {
        int quadrado = numero * numero;
        printf("%d^2 = %d\n", numero, quadrado);
    }

    return 0;
}
