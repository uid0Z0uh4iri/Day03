#include <stdio.h>

int main() {
    int nombre;
    int somme = 0;
    int count = 0;

    printf("Entrez des nombres positifs (termin�s par z�ro) :\n");

    while (1) {
        scanf("%d", &nombre);
        if (nombre == 0) {
            break;
        }
        somme += nombre;
        count++;
    }

    if (count > 0) {
        double moyenne = (double)somme / count;
        printf("La moyenne est: %.2f\n", moyenne);
    } else {
        printf("Aucun nombre n'a �t� entr�.\n");
    }

    return 0;
}
