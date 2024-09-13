#include <stdio.h>

// Fonction pour calculer le n-ième terme de la suite de Fibonacci
unsigned long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    unsigned long long fib1 = 0, fib2 = 1, fibN;
    for (int i = 2; i <= n; i++) {
        fibN = fib1 + fib2;
        fib1 = fib2;
        fib2 = fibN;
    }

    return fibN;
}

int main() {
    int n;
    printf("Entrez le rang n du terme de Fibonacci que vous souhaitez calculer : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Veuillez entrer un nombre non négatif.\n");
        return 1;
    }

    unsigned long long resultat = fibonacci(n);
    printf("Le %d-ème terme de la suite de Fibonacci est : %llu\n", n, resultat);

    return 0;
}
