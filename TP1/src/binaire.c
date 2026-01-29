#include <stdio.h>

void afficher_binaire(int n) {
    printf("%d en binaire = ", n);

    // parcourir les 32 bits d'un int
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);

        // espace pour lisibilité toutes les 4 positions
        if (i % 4 == 0) {
            printf(" ");
        }
    }

    printf("\n");
}

int main() {
    int tests[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < taille; i++) {
        afficher_binaire(tests[i]);
    }

    return 0;
}

