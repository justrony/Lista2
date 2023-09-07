#include <stdio.h>

int main() {

    int sum3=0,sum5=0;

        for (int numero = 0; numero <= 200; numero++) {
            if (numero >= 0 && numero <= 100 && numero % 3 == 0) {
                sum3 += numero;
            }
            if (numero > 100 && numero <= 200 && numero % 5 == 0) {
                sum5 += numero;
            }
        }

        printf("Somatorio dos numeros divisiveis por 3 no intervalo [0, 100]: %d\n", sum3);
        printf("Somatorio dos numeros divisiveis por 5 no intervalo [100, 200]: %d\n", sum5);

    return 0;
}
