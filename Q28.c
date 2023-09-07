#include <stdio.h>

int main() {

    unsigned char X, Y;

        printf("Digite um valor para X (0-255): ");
        scanf("%hhu", &X);
        printf("Digite um valor para Y (5-251): ");
        scanf("%hhu", &Y);

        if (Y < 5 || Y > 251) {
            printf("Y deve estar no intervalo de 5 a 251.\n");
            return 1;
        }

        for (int i = Y - 4; i <= Y + 4; i++) {
            if (i >= 0 && i < 256) {
                unsigned char mascara = 1;
                unsigned char elemento = X;
                int deslocamento = (i - Y) & 7;

                mascara <<= deslocamento;
                elemento <<= deslocamento;

                X &= ~mascara;
                X |= elemento; 
            }
        }

        printf("O valor de X apos a modificacao: %hhu\n", X);

    return 0;
}
