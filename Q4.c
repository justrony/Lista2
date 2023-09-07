#include <stdio.h>

int main() {

    int anos=0,joseHight=150,pedroHight=110;

        while (joseHight >= pedroHight) {
            anos++;
            joseHight += 2;   
            pedroHight += 3;  
        }

        printf("Pedro sera maior que Jose em %d anos\n", anos);

    return 0;
}
