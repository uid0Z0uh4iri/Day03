#include<stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'elements du tableau: ");
    scanf("%d", &n);

    int tab1[n], tab2[n];

    for (int i = 0; i < n; i++) {
        printf("Entrez l'element %d pour le tableau original: ", i + 1);
        scanf("%d", &tab1[i]);
    }

    for (int i = 0; i < n; i++) {
        tab2[i] = tab1[i];
    }

    printf("Les elements du tableau original sont : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab1[i]);
    }

    printf("\nLes elements du tableau copie sont : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab2[i]);
    }

    return 0;
}
