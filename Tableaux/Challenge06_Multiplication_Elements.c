#include<stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'elements du tableau: ");
    scanf("%d", &n);

    int tab[n];
    int max=0;
    int multip=1;

    for (int i = 0; i < n; i++) {
        printf("Entrez l'element %d: ", i + 1);
        scanf("%d", &tab[i]);
        if (tab[i]>max)
            multip*=tab[i];
    }

    printf("Les elements du tableau sont : ");
    for (int i = 0; i < n; i++) {
        printf("%d \n", tab[i]);
    }
      printf("La multip de tableau : %d", multip);
    return 0;
}
