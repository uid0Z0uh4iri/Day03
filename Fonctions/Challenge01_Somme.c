#include <stdio.h>


int somme(int a, int b) {
    return a + b;
}

int main() {
    int nombre1, nombre2, resultat;

    printf("Entrez le premier nombre : ");
    scanf("%d", &nombre1);

    printf("Entrez le deuxi�me nombre : ");
    scanf("%d", &nombre2);

    // Appel de la fonction somme et stockage du r�sultat
    resultat = somme(nombre1, nombre2);

    printf("La somme de %d et %d est : %d\n", nombre1, nombre2, resultat);

    return 0;
}
