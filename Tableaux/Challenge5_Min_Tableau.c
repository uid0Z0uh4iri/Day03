#include<stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'elements du tableau: ");
    scanf("%d", &n);

    int tab[n];
    int min=1000000;

    for (int i = 0; i < n; i++) {
        printf("Entrez l'element %d: ", i + 1);
        scanf("%d", &tab[i]);
        if (tab[i]<min)
            min=tab[i];
    }

    printf("Les elements du tableau sont : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
      printf("La valeur minimum de ce tableau est : %d", min);
    return 0;
}
