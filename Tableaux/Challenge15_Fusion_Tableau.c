#include<stdio.h>

int main() {
    int n1, n2;

    printf("Entrez le nombre d'elements du premier tableau: ");
    scanf("%d", &n1);

    int tab1[n1];

    for (int i = 0; i < n1; i++) {
        printf("Entrez l'element %d pour le premier tableau: ", i + 1);
        scanf("%d", &tab1[i]);
    }

    printf("Entrez le nombre d'elements du deuxième tableau: ");
    scanf("%d", &n2);

    int tab2[n2];

    for (int i = 0; i < n2; i++) {
        printf("Entrez l'element %d pour le deuxième tableau: ", i + 1);
        scanf("%d", &tab2[i]);
    }

    int fusion[n1 + n2];

    for (int i = 0; i < n1; i++) {
        fusion[i] = tab1[i];
    }

    for (int i = 0; i < n2; i++) {
        fusion[n1 + i] = tab2[i];
    }

    printf("Les elements du tableau fusionne sont : ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", fusion[i]);
    }

    return 0;
}
