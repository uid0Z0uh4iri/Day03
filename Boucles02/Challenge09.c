#include <stdio.h>

int main() {
    int base, exposant;
    long long resultat = 1;

    printf("Entrez la base (positive): ");
    scanf("%d", &base);

    printf("Entrez l'exposant (non négatif): ");
    scanf("%d", &exposant);

    while (exposant > 0) {
        resultat *= base;
        exposant--;
    }

    printf("La puissance est: %lld\n", resultat);

    return 0;
}
