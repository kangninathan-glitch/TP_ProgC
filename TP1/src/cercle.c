#include <stdio.h>

int main() {
    double pi = 3.1416;
    double r = 6;

    double aire = pi * r * r;
    double perimetre = 2 * pi * r;

    printf("L'aire du cercle = %f\n", aire);
    printf("Le perimetre du cercle = %f\n", perimetre);

    return 0;
}

