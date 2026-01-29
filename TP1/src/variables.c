#include <stdio.h>

int main() {

    // ----- CHAR -----
    signed char sc = -10;
    unsigned char uc = 250;

    // ----- SHORT -----
    signed short ss = -300;
    unsigned short us = 60000;

    // ----- INT -----
    signed int si = -20000;
    unsigned int ui = 4000000000U;

    // ----- LONG INT -----
    signed long sl = -2000000000L;
    unsigned long ul = 4000000000UL;

    // ----- LONG LONG INT -----
    signed long long sll = -5000000000LL;
    unsigned long long ull = 10000000000ULL;

    // ----- FLOAT -----
    float f = 3.14f;

    // ----- DOUBLE -----
    double d = 2.718281828;

    // ----- LONG DOUBLE -----
    long double ld = 1.23456789012345L;


    // ----- AFFICHAGE -----
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

