#include<stdio.h>

int main(){

    int tab[100];
    int n;

    printf("Donner la taille du tableau \n");

    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%d", &tab[i]);
    }

    for (int i = 0; i < n; i++){
        printf("%d ", tab[i]);

    return 0;
}
}
