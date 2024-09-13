#include <stdio.h>

int main() {
    int n, reste;
    printf("Entrez un entier: ");
    scanf("%d", &n);

    while (n != 0) {
        reste = n % 10;
        printf("%d", reste);
        n = n / 10;
    }

    return 0;
}
