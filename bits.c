#include <stdio.h>

int main() {

    int d = 0x10001000;  // valeur à tester

    int bit4g = (d >> 28) & 1;   // 4e bit de gauche (bit 28)
    int bit20g = (d >> 12) & 1;  // 20e bit de gauche (bit 12)

    if (bit4g == 1 && bit20g == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}

