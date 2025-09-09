#include <stdio.h>
#include <string.h>
#define MAX_CONTACTS 50

typedef struct
{
    char nom[50];
    char numero[50];
    char email[50];
} contact;

contact c[MAX_CONTACTS];
int cmp = 0;

void ajouter()
{

    printf("entrer le nom de contact\n");
    getchar();
    fgets(c[cmp].nom, sizeof(c[cmp].nom), stdin);
    printf("entrer le numero de telephone de contact\n");
    fgets(c[cmp].numero, sizeof(c[cmp].numero), stdin);
    printf("entrer l'email de contact\n");
    fgets(c[cmp].email, sizeof(c[cmp].email), stdin);
    cmp++;
    printf("le contact a ete ajouter avec succes\n");
}

void modifier()
{
    char search[MAX_CONTACTS];
    printf("entrer le nom de contact a modifier\n");
    getchar();
    fgets(search, sizeof(search), stdin);

    for (int i = 0; i < cmp; i++)
    {
        if (strcmp(c[i].nom, search) == 0)
        {

            printf("entrer le nouveau numero de contact\n");
            fgets(c[cmp].numero, sizeof(c[cmp].numero), stdin);
            printf("entrer le nouveau email de contact\n");
            fgets(c[cmp].email, sizeof(c[cmp].email), stdin);

            printf("les modifications q bien etre change\n");
        }
    }
}

void suprimer()
{
    char search[MAX_CONTACTS];
    printf("entrer le nom du contact a suprimer\n");
    getchar();
    fgets(search, sizeof(search), stdin);
    for (int i = 0; i < cmp; i++)
    {
        if (strcmp(c[i].nom, search) == 0)
        {
            for (int j = i; j < cmp - 1; j++)
            {
                c[j] = c[j + 1];
            }
            cmp--;
        }
    }
    printf("le contact a ete suprime avec succes\n");
}

void afficher()
{
    printf("liste de tous les contacts\n");
    for (int i = 0; i < cmp; i++)
    {
        printf("nom : %s\n", c[i].nom);
        printf("numero : %s\n", c[i].numero);
        printf("email : %s\n", c[i].email);
    }
}

void rechercher()
{
    char search[MAX_CONTACTS];

    printf("entrer le nom de contact a rechercher\n");
    getchar();
    fgets(search, sizeof(search), stdin);

    for (int i = 0; i < cmp; i++)
    {

        if (strcmp(c[i].nom, search) == 0)
        {
            printf("le nom de contact %s\n", c[i].nom);
            printf("le numero de telephone de contact %s\n", c[i].numero);
            printf("l email de contact %s\n", c[i].email);
        }
    }
}

int main()
{
    int choix = 0;
    do
    {
        printf("------------menu-----------\n");
        printf("1 Ajouter un contact.\n");
        printf("2 Modifier un contact.\n");
        printf("3 Supprimer un contact.\n");
        printf("4 Afficher tous les contacts.\n");
        printf("5 Rechercher un contact .\n");

        scanf("%d", &choix);
        switch (choix)
        {
        case 1:
            ajouter();

            break;

        case 2:
            modifier();

            break;

        case 3:
            suprimer();

            break;

        case 4:
            afficher();

            break;

        case 5:
            rechercher();

            break;
        }
        
            
    }while (choix != 0);
    return 0;
}
