#include<stdio.h>

int main() {
    int n;
    float somme;
    printf("Entrez le nombre d'elements du tableau: ");
    scanf("%d", &n);

    int tab[n];
    for (int i = 0; i < n; i++) {
        printf("Entrez l'element %d: ", i + 1);
        scanf("%d", &tab[i]);
        somme += tab[i];
    }

    float moyenne = somme / n;
    printf("La moyenne des elements est: %.2f\n", moyenne);

    return 0;
}
