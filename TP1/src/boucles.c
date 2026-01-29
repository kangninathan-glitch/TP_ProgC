#include <stdio.h>

int main() {
    int compteur = 5;  // change cette valeur pour tester

    for (int i = 1; i <= compteur; i++) {

        // On affiche i symboles
        for (int j = 1; j <= i; j++) {

            // Si on est sur la dernière ligne → que des étoiles
            if (i == compteur) {
                printf("* ");
            }
            // Sinon : alterne * et #
            else {
                if (j % 2 == 1)
                    printf("* ");
                else
                    printf("# ");
            }
        }

        printf("\n");
    }

    return 0;
}

