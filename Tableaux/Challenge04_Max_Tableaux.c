#include<stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'elements du tableau: ");
    scanf("%d", &n);

    int tab[n];
    int max=0;

    for (int i = 0; i < n; i++) {
        printf("Entrez l'element %d: ", i + 1);
        scanf("%d", &tab[i]);
        if (tab[i]>max)
            max=tab[i];
    }

    printf("Les elements du tableau sont : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
      printf("La valeur maximum de ce tableau est : %d", max);
    return 0;
}
