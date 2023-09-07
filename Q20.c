#include <stdio.h>

int main() {
    
    printf("Fatorial dos valores impares na faixa de 1 a 10:\n");

    for (int numero = 1; numero <= 10; numero++) {
        if (numero % 2 != 0) { 
            int fatorial = 1;
            for (int i = 1; i <= numero; i++) {
                fatorial *= i;
            }
            printf("%d! = %d\n", numero, fatorial);
        }
    }

    return 0;
}
