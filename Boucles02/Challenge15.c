#include <stdio.h>

int main() {
    int n;
    long long factorielle = 1;

    printf("Entrez un entier positif: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("La factorielle n'est pas d�finie pour les nombres n�gatifs.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        factorielle *= i;
    }

    printf("La factorielle de %d est: %lld\n", n, factorielle);

    return 0;
}
