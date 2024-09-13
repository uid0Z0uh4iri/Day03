#include <stdio.h>


int main() {
    int tableau[100];
    int n, i;

    printf("Entrez le nombre d'elements du tableau (max 100): ");
    scanf("%d", &n);

    printf("Entrez les elements du tableau:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    printf("Les elements impairs du tableau sont:\n");
    for (i = 0; i < n; i++) {
        if (tableau[i] % 2 != 0) {
            printf("%d ", tableau[i]);
        }
    }
    printf("\n");

    return 0;
}
