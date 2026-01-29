#include <stdio.h>

int main() {

    printf("sizeof(char) = %zu octets\n", sizeof(char));
    printf("sizeof(signed char) = %zu octets\n", sizeof(signed char));
    printf("sizeof(unsigned char) = %zu octets\n", sizeof(unsigned char));

    printf("sizeof(short) = %zu octets\n", sizeof(short));
    printf("sizeof(signed short) = %zu octets\n", sizeof(signed short));
    printf("sizeof(unsigned short) = %zu octets\n", sizeof(unsigned short));

    printf("sizeof(int) = %zu octets\n", sizeof(int));
    printf("sizeof(signed int) = %zu octets\n", sizeof(signed int));
    printf("sizeof(unsigned int) = %zu octets\n", sizeof(unsigned int));

    printf("sizeof(long int) = %zu octets\n", sizeof(long int));
    printf("sizeof(unsigned long int) = %zu octets\n", sizeof(unsigned long int));

    printf("sizeof(long long int) = %zu octets\n", sizeof(long long int));
    printf("sizeof(unsigned long long int) = %zu octets\n", sizeof(unsigned long long int));

    printf("sizeof(float) = %zu octets\n", sizeof(float));
    printf("sizeof(double) = %zu octets\n", sizeof(double));
    printf("sizeof(long double) = %zu octets\n", sizeof(long double));

    return 0;
}

