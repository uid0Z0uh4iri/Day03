#include <stdio.h>

int main() {
    int taille;
    printf("Entrez la taille du tableau: ");
    scanf("%d", &taille);

    int tableau[taille];
    printf("Entrez les éléments du tableau trié:\n");
    for (int i = 0; i < taille; i++) {
        scanf("%d", &tableau[i]);
    }

    int cible;
    printf("Entrez le nombre à rechercher: ");
    scanf("%d", &cible);

    int gauche = 0;
    int droite = taille - 1;
    int milieu;
    int trouve = -1;

    while (gauche <= droite) {
        milieu = (gauche + droite) / 2;

        if (tableau[milieu] == cible) {
            trouve = milieu;
            break;
        } else if (tableau[milieu] < cible) {
            gauche = milieu + 1;
        } else {
            droite = milieu - 1;
        }
    }

    if (trouve != -1) {
        printf("Nombre trouvé à l'indice %d\n", trouve);
    } else {
        printf("Nombre non trouvé\n");
    }

    return 0;
}
