#include <stdio.h>


int max(int a, int b) {
    if (a>b)
        return a;
        else if(b>a)
        return b;
        else return a;
}

int main() {
    int nombre1, nombre2, maximum;

    printf("Entrez le premier nombre : ");
    scanf("%d", &nombre1);

    printf("Entrez le deuxième nombre : ");
    scanf("%d", &nombre2);

    maximum= max(nombre1,nombre2);

    printf("Le plus grand est : %d", maximum);

    return 0;
}
