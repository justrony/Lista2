#include <stdio.h>

int main() {

    printf("Decimal\tBinário\tOctal\tHexadecimal\n");

    for (int decimal = 1; decimal <= 256; decimal++) {
        printf("%d\t", decimal);

        for (int i = 7; i >= 0; i--) {
            int bit = (decimal >> i) & 1;
            printf("%d", bit);
        }

        printf("\t");
        printf("%o\t", decimal);
        printf("%X\n", decimal);
    }

    return 0;
}
