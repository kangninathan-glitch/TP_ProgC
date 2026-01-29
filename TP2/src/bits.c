#include <stdio.h>

int main() {

    int d = 0x10001000;  

    int bit4g = (d >> 28) & 1;   
    int bit20g = (d >> 12) & 1;  

    if (bit4g == 1 && bit20g == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
