#include <stdio.h>

int main() {
    
    printf("Conversao de graus Celsius para graus Fahrenheit:\n");
    printf("Celsius\t\tFahrenheit\n");

    for (int celsius = 10; celsius <= 100; celsius += 10) {
        int fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("%d\t\t%d\n", celsius, fahrenheit);
    }

    return 0;
}
