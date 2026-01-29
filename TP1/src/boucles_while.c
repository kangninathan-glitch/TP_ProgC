#include <stdio.h>

int main() {

    int compteur = 5;   

    int i = 1;
    while (i <= compteur) {

        int j = 1;
        while (j <= i) {

            
            if (i == compteur) {
                printf("* ");
            }
            
            else {
                if (j % 2 == 1)
                    printf("* ");
                else
                    printf("+ ");
            }

            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}

