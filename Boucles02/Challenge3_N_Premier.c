#include <stdio.h>

int main() {
    int n;
    printf("Entrez un entier: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        int est_premier = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                est_premier = 0;
                break;
            }
        }
        if (est_premier) {
            printf("%d ", i);
        }
    }

    return 0;
}
