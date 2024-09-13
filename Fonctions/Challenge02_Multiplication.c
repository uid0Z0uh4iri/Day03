#include <stdio.h>


int produit(int a, int b) {
    return a * b; // n retourniw *
}

int main() {
    int nombre1, nombre2, resultat;

    printf("Entrez le premier nombre : ");
    scanf("%d", &nombre1);

    printf("Entrez le deuxième nombre : ");
    scanf("%d", &nombre2);


    resultat = produit(nombre1, nombre2); // appel au fct

    printf("Le produiit de %d et %d est : %d\n", nombre1, nombre2, resultat);

    return 0;
}
