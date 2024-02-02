#include <stdio.h>

void convertirMajusculesMinuscules(char mot[]) {
    int i = 0;

    while (mot[i] != '\0') {
        // Si la lettre est une minuscule, convertir en majuscule, sinon convertir en minuscule
        if (mot[i] >= 'a' && mot[i] <= 'z') {
            mot[i] = mot[i] - 'a' + 'A';
        } else if (mot[i] >= 'A' && mot[i] <= 'Z') {
            mot[i] = mot[i] - 'A' + 'a';
        }

        i++;
    }
}

int main() {
    char mot[100];

    // Demander à l'utilisateur de saisir un mot
    printf("Entrez un mot : ");
    scanf("%s", mot);

    // Appeler la fonction pour convertir les lettres
    convertirMajusculesMinuscules(mot);

    // Afficher le résultat
    printf("Le mot après conversion : %s\n", mot);

    return 0;
}