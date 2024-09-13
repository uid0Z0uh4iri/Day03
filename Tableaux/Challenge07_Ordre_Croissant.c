#include<stdio.h>

int main() {
    int n;

    // Demander à l'utilisateur le nombre d'éléments du tableau
    printf("Entrez le nombre d'elements du tableau: ");
    scanf("%d", &n);

    int tab[n];

    for (int i = 0; i < n; i++) {
        printf("Entrez l'element %d: ", i + 1);
        scanf("%d", &tab[i]);
    }

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (tab[j] > tab[j+1]) {
                int temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }

    printf("Les elements du tableau tries par ordre croissant sont : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
}
