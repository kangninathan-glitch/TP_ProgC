#include <stdio.h>

int main() {

    int compteur = 5;   // change la valeur pour tester

    int i = 1;
    while (i <= compteur) {

        int j = 1;
        while (j <= i) {

            // Si on est sur la dernière ligne → seulement des étoiles
            if (i == compteur) {
                printf("* ");
            }
            // Sinon : alterne *, #, *, # ...
            else {
                if (j % 2 == 1)
                    printf("* ");
                else
                    printf("# ");
            }

            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}

