#include <stdio.h>
#include <string.h>
#define MAX_CONTACTS 50
typedef struct
{
    char nom[MAX_CONTACTS];
    char telephone[MAX_CONTACTS];
    char email[MAX_CONTACTS];
} Contact;

Contact contacts[MAX_CONTACTS];
int cmp = 0;

void ajouter()
{

    printf("Nom du contact : \n");
    getchar();
    fgets(contacts[cmp].nom, sizeof(contacts[cmp].nom), stdin);

    printf("Numero de telephone : \n");
    fgets(contacts[cmp].telephone, sizeof(contacts[cmp].telephone), stdin);

    printf("Adresse e mail : \n");
    fgets(contacts[cmp].email, sizeof(contacts[cmp].email), stdin);

    cmp++;
}

void modifier()
{
    char search[MAX_CONTACTS];
    printf("nom du contact a modifier:\n");
    getchar();
    fgets(search, sizeof(search), stdin);

    for (int i = 0; i < cmp; i++)
    {
        if (strcmp(search, contacts[i].nom) == 0)
        {
            printf("nouveau numero de telephone : \n");
            fgets(contacts[i].telephone, sizeof(contacts[i].telephone), stdin);
            printf("nouvelle adresse e email: \n");
            fgets(contacts[i].email, sizeof(contacts[i].email), stdin);
            break;
        }
    }
}

void suprimer()
{
    char search[MAX_CONTACTS];
    printf("Nom du contact a supprimer : \n");
    getchar();
    fgets(search, sizeof(search), stdin);

    for (int i = 0; i < cmp; i++)
    {
        if (strcmp(search, contacts[i].nom) == 0)
        {
            for (int j = i; j < cmp - 1; j++)
            {
                contacts[j] = contacts[j + 1];
            }
            cmp--;
            break;
        }
    }
}

void afficher()
{
    printf("-------Liste des contacts---------\n");
    for (int i = 0; i < cmp; i++)
    {
        printf("nom : %s", contacts[i].nom);
        printf("telephone : %s", contacts[i].telephone);
        printf("email : %s", contacts[i].email);
    }
}

void rechercher()
{
    char search[MAX_CONTACTS];
    printf("Nom du contact a rechercher : \n");
    getchar();
    fgets(search, sizeof(search), stdin);

    for (int i = 0; i < cmp; i++)
    {
        if (strcmp(search, contacts[i].nom) == 0)
        {
            printf("Nom : %s", contacts[i].nom);
            printf("telephone : %s", contacts[i].telephone);
            printf("Email : %s", contacts[i].email);
            break;
        }
    }
}

int main()
{
    int choix;
    do
    {
        printf("-------menu---------\n");
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
        {
            modifier();
            break;
        }

        case 3:
        {
            suprimer();
            break;
        }

        case 4:
            afficher();
            break;

        case 5:
            rechercher();
            break;

        default:
            printf("Choix invalide.\n");
        }

    } while (choix != 0);

    return 0;
}