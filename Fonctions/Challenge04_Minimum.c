#include <stdio.h>


int min(int a, int b) {
    if (a>b)
        return b;
        else if(b>a)
        return a;
        else
            return a;
}

int main() {
    int nombre1, nombre2, minimum;

    printf("Entrez le premier nombre : ");
    scanf("%d", &nombre1);

    printf("Entrez le deuxième nombre : ");
    scanf("%d", &nombre2);

    minimum= min(nombre1,nombre2);

    printf("Le plus petit est : %d", minimum);

    return 0;
}
