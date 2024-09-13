#include<stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'elements du tableau: ");
    scanf("%d", &n);

    int tab[n];
    int somme;

    for (int i = 0; i < n; i++) {
        printf("Entrez l'element %d: \n", i + 1);
        scanf("%d", &tab[i]);
        somme=somme+tab[i];
    }

    printf("Les elements du tableau sont : \n ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }

    printf("\n La somme des elements du tableaux est : %d",somme);

    return 0;
}
