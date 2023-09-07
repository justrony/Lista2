#include <stdio.h>
#include <math.h>

int main() {

    for (int exp = 0; exp <= 7; exp++) {
        double result = pow(3, exp);
        printf("3^%d = %.0lf\n", exp, result);
    }

    return 0;
}
