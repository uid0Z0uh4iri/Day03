#include <stdio.h>
#define MAX 100

int main() {
    int tableau[MAX];
    int n, i, valeur_a_remplacer, nouvelle_valeur;

    printf("Entrez le nombre d'elements du tableau (max 100): ");
    scanf("%d", &n);

    printf("Entrez les elements du tableau:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    printf("Entrez la valeur a remplacer: ");
    scanf("%d", &valeur_a_remplacer);

    printf("Entrez la nouvelle valeur: ");
    scanf("%d", &nouvelle_valeur);

    for (i = 0; i < n; i++) {
        if (tableau[i] == valeur_a_remplacer) {
            tableau[i] = nouvelle_valeur;
        }
    }

    printf("Le tableau modifie est:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }

    return 0;
}
