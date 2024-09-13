#include <stdio.h>

int main() {
    int n;
    printf("Donner un nombre: ");
    scanf("%d", &n);

        for (int j = n; j >= 1; j--) {
            printf("%d * %d = %d\n", n, j, n*j);
        }
        printf("\n");

    return 0;
}
