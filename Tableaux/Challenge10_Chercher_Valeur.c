#include <stdio.h>
#define MAX 100

int main() {
    int tableau[MAX];
    int n, i, element_recherche;
    int trouve = 0;

    printf("Entrez le nombre d'elements du tableau (max 100): ");
    scanf("%d", &n);

    printf("Entrez les elements du tableau:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    printf("Entrez l'element a rechercher: ");
    scanf("%d", &element_recherche);

    for (i = 0; i < n; i++) {
        if (tableau[i] == element_recherche) {
            trouve = 1;
            break;
        }
    }

    if (trouve) {
        printf("L'element %d est present dans le tableau a la position %d.\n", element_recherche, i);
    } else {
        printf("L'element %d n'est pas present dans le tableau.\n", element_recherche);
    }

    return 0;
}
