#include <stdio.h>

int main() {

    
    signed char sc = -10;
    unsigned char uc = 250;

    signed short ss = -300;
    unsigned short us = 60000;

    signed int si = -20000;
    unsigned int ui = 4000000000U;

    signed long sl = -2000000000L;
    unsigned long ul = 4000000000UL;

    signed long long sll = -5000000000LL;
    unsigned long long ull = 10000000000ULL;

    float f = 3.14f;

    double d = 2.718281828;

    long double ld = 1.23456789012345L;


    printf("signed char = %d\n", sc);
    printf("unsigned char = %u\n", uc);

    printf("signed short = %d\n", ss);
    printf("unsigned short = %u\n", us);

    printf("signed int = %d\n", si);
    printf("unsigned int = %u\n", ui);

    printf("signed long = %ld\n", sl);
    printf("unsigned long = %lu\n", ul);

    printf("signed long long = %lld\n", sll);
    printf("unsigned long long = %llu\n", ull);

    printf("float = %f\n", f);
    printf("double = %lf\n", d);
    printf("long double = %Lf\n", ld);

    return 0;
}

