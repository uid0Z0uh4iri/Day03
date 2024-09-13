#include <stdio.h>

int main() {
    // Déclaration des jours de la semaine dans un tableau fixe
    char jours_de_la_semaine[7][10] = {
        "Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"
    };

    int choix;

    printf("Choisissez un jour de la semaine (1 pour Lundi, 2 pour Mardi, etc.): ");
    scanf("%d", &choix);

    // Vérification de la validité du choix
    if (choix < 1 || choix > 7) {
        printf("Choix invalide. Veuillez entrer un nombre entre 1 et 7.\n");
        return 1;
    }

    // Calcul de l'index correspondant au choix
    int index = choix - 1;

    // Affichage du jour sélectionné
    printf("Jour sélectionné: %s\n", jours_de_la_semaine[index]);

    // Affichage des jours suivants
    printf("Jours suivants:\n");
    for (int i = index + 1; i < 7; i++) {
        printf("%s\n", jours_de_la_semaine[i]);
    }

    return 0;
}
