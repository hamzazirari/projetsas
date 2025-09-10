#include <stdio.h>
#include <string.h>

typedef struct
{
    char id[50];
    char nom[100];
    char prenom[100];
    int numeroMaillot;
    char poste[100];
    int age;
    int buts;
    char statut[100];
} joueur;
joueur j[100];
int nbJoueur = 0;

void ajouter()
{
    int choixposte;
    int choixstatut;

    sprintf(j[nbJoueur].id, "0%d", nbJoueur + 1);

    printf("Nom du joueur : \n");
    getchar();
    fgets(j[nbJoueur].nom, sizeof(j[nbJoueur].nom), stdin);

    printf("prenom du joueur : \n");
    fgets(j[nbJoueur].prenom, sizeof(j[nbJoueur].prenom), stdin);

    printf("numero de maillot : \n");
    scanf("%d", &j[nbJoueur].numeroMaillot);
    getchar();

    printf("--choisir le poste de joueur : \n");
    printf(" 1 : gardien \n");
    printf(" 2 : defenseur \n");
    printf(" 3 : milieu \n");
    printf(" 4 : attaquant \n");
    scanf("%d", &choixposte);
    switch (choixposte)
    {
    case 1:
        strcpy(j[nbJoueur].poste, "gardien");
        break;
    case 2:
        strcpy(j[nbJoueur].poste, "defenseur");
        break;
    case 3:
        strcpy(j[nbJoueur].poste, "milieu");
        break;
    case 4:
        strcpy(j[nbJoueur].poste, "attaquant");
        break;

    default:
        printf("Choix invalide.\n");
        break;
    }

    printf("entrer lage de joueur  : \n");
    scanf("%d", &j[nbJoueur].age);
    getchar();

    printf("entrer combient de buts le joueur a marque : \n");
    scanf("%d", &j[nbJoueur].buts);
    getchar();

    printf("--choisir le poste de joueur : \n");
    printf(" 1 : titulaire\n");
    printf(" 2 : remplaçant\n");
    scanf("%d", &choixstatut);

    switch (choixstatut)
    {
    case 1:
        strcpy(j[nbJoueur].statut, "titulaire");
        break;
    case 2:
        strcpy(j[nbJoueur].statut, "titulaire");
        break;

    default:
        printf("choix invalid");
        break;
    }
    nbJoueur++;
}

void afficher()
{

    int choixafficher;
    do
    {

        printf("---------menu de listes de joueurs--------\n");
        printf(" 1 : listes de joueurs Trier  par ordre alphabetique (Nom). \n");
        printf(" 2 : listes de joueurs Trier  par age . \n");
        printf(" 3 : listes de joueurs par poste . \n");
        printf(" 0: Quitter. \n");
        printf("------------------------------------------\n");
        scanf("%d", &choixafficher);

        switch (choixafficher)
        {
        case 1:

            for (int i = 0; i < nbJoueur - 1; i++)
            {
                for (int k = 0; k < nbJoueur - i - 1; k++)
                {
                    if (strcmp(j[k].nom, j[k + 1].nom) > 0)
                    {
                        joueur temp = j[k];
                        j[k] = j[k + 1];
                        j[k + 1] = temp;
                    }
                }
            }
            printf("listes des Joueurs tries par ordre alphabetique du nom:\n");

            // Affichage
            for (int i = 0; i < nbJoueur; i++)
            {
                printf("ID: %s | Nom: %s | Prenom: %s | Poste: %s | Age: %d | Maillot: %d | Buts: %d\n",
                       j[i].id, j[i].nom, j[i].prenom, j[i].poste, j[i].age, j[i].numeroMaillot, j[i].buts);
            }

            break;

        case 2:

            for (int i = 0; i < nbJoueur - 1; i++)
            {
                for (int k = 0; k < nbJoueur - i - 1; k++)
                {
                    if (j[k].age > j[k + 1].age)
                    {
                        joueur temp = j[k];
                        j[k] = j[k + 1];
                        j[k + 1] = temp;
                    }
                }
            }
            // affffichage
            printf(" joueurs tries par age (du plus jeune au plus vieux) :\n");
            for (int i = 0; i < nbJoueur; i++)
            {
                printf("%s %s - %d ans\n", j[i].nom, j[i].prenom, j[i].age);
            }

            break;

        case 3:
            printf("liste des joueurs tries par poste\n");
            for (int i = 0; i < nbJoueur; i++)
            {
                if (stricmp(j[i].poste, "gardien") == 0)
                {

                    printf("-----les gardiens sont------\n");
                    printf("ID: %s | Nom: %s | Prenom: %s | Poste: %s | Age: %d | Maillot: %d | Buts: %d\n",
                           j[i].id, j[i].nom, j[i].prenom, j[i].poste, j[i].age, j[i].numeroMaillot, j[i].buts);
                }
            }

            for (int i = 0; i < nbJoueur; i++)
            {
                if (stricmp(j[i].poste, "defenseur") == 0)
                {
                    printf("-----les defenseurs sont------\n");
                    printf("ID: %s | Nom: %s | Prenom: %s | Poste: %s | Age: %d | Maillot: %d | Buts: %d\n",
                           j[i].id, j[i].nom, j[i].prenom, j[i].poste, j[i].age, j[i].numeroMaillot, j[i].buts);
                }
            }

            for (int i = 0; i < nbJoueur; i++)
            {
                if (stricmp(j[i].poste, "milieu") == 0)
                {

                    printf("-----les milieus sont------\n");
                    printf("ID: %s | Nom: %s | Prenom: %s | Poste: %s | Age: %d | Maillot: %d | Buts: %d\n",
                           j[i].id, j[i].nom, j[i].prenom, j[i].poste, j[i].age, j[i].numeroMaillot, j[i].buts);
                }
            }

            for (int i = 0; i < nbJoueur; i++)
            {
                if (stricmp(j[i].poste, "attaquant") == 0)
                {
                    printf("-----les attaquants sont------\n");
                    printf("ID: %s | Nom: %s | Prenom: %s | Poste: %s | Age: %d | Maillot: %d | Buts: %d\n",
                           j[i].id, j[i].nom, j[i].prenom, j[i].poste, j[i].age, j[i].numeroMaillot, j[i].buts);
                }
            }

            break;
        default:
            printf("Choix invalide.\n");
        }
    } while (choixafficher != 0);
}

int main()
{

    int choix;

    do
    {

        printf("------------ menu principale --------------\n");
        printf(" 1 : ajouter un joueur :\n");
        printf(" 2 : Afficher la liste de tous les joueurs :\n");
        printf(" 3 : Modifier un joueur : \n");
        printf(" 4 : Supprimer un joueur :\n");
        printf(" 5 : Rechercher un joueur : \n");
        printf(" 6 : Statistiques : \n");
        printf(" 0: Quitter. \n");
        printf("------------------------------------------\n");
        printf("entrer votre choix\n");

        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            ajouter();

            break;

        case 2:
            afficher();
            break;

        case 3:

            break;

        case 4:

            break;

        case 5:

            break;

        case 6:

            break;

        default:
            printf("Choix invalide.\n");
        }

    } while (choix != 0);

    return 0;
}