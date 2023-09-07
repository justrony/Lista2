#include <stdio.h>

int main() {

    int n=20,termo1=1,termo2=1,proximoTermo;

        printf("Fibonacci: \n");

        printf("%d, %d, ", termo1, termo2);

        for (int i = 3; i <= n; i++) {
            proximoTermo = termo1 + termo2;
            printf("%d", proximoTermo);

            if (i < n) {
                printf(", ");
            }

            termo1 = termo2;
            termo2 = proximoTermo;
        }

        printf("\n");

    return 0;
}
