#include <stdio.h>

int main() {

    int cateto1, cateto2,hipotenusa,limite=500;

        for (hipotenusa = 1; hipotenusa <= limite; hipotenusa++) {
            for (cateto1 = 1; cateto1 < hipotenusa; cateto1++) {
                for (cateto2 = cateto1; cateto2 < hipotenusa; cateto2++) {
                    if (cateto1 * cateto1 + cateto2 * cateto2 == hipotenusa * hipotenusa) {
                        printf("(%d, %d, %d)\n", cateto1, cateto2, hipotenusa);
                    }
                }
            }
        }

    return 0;
}
