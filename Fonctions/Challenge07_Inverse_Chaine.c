#include <stdio.h>
#include <string.h>


// Fonction pour inverser une cha�ne de caract�res
void inverserChaine(char *chaine) {
    int longueur = strlen(chaine);
    int i, j;
    char temp;

    for (i = 0, j = longueur - 1; i < j; i++, j--) {
        temp = chaine[i];
        chaine[i] = chaine[j];
        chaine[j] = temp;
    }
}

int main() {
    char chaine[100];

    printf("Entrez une cha�ne de caract�res : ");
    fgets(chaine, sizeof(chaine), stdin);

    chaine[strcspn(chaine, "\n")] = 0;

    printf("Cha�ne originale : %s\n", chaine);

    inverserChaine(chaine);

    printf("Cha�ne invers�e : %s\n", chaine);

    return 0;
}
