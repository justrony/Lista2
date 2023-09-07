#include <stdio.h>

int main() {

    int numero=10,resultado_pre=0, resultado_pos=0;

        resultado_pre = --numero;
        numero = 10;
        resultado_pos = numero--;

        printf("pre: %d\n", resultado_pre);
        printf("pos: %d\n", resultado_pos);

    return 0;
}
