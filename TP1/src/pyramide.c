#include <stdio.h>

int main() {

    int n = 5; // hauteur de la pyramide

    // boucle sur les lignes
    for (int i = 1; i <= n; i++) {

        // 1) afficher les espaces pour centrer
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // 2) afficher les nombres croissants (1 → i)
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3) afficher les nombres décroissants (i-1 → 1)
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    printf("Pyramide terminee.\n");

    return 0;
}

