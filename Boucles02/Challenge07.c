#include <stdio.h>

int main() {
    int n, a = 0, b = 1, suivant;
    printf("Entrez un entier: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", a);
        } else if (i == 1) {
            printf("%d ", b);
        } else {
            suivant = a + b;
            a = b;
            b = suivant;
            printf("%d ", suivant);
        }
    }

    return 0;
}
