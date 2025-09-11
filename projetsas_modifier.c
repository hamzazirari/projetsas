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
joueur j[100] = {
    {"a1", "Bono", "Yassine", 1, "gardien", 33, 0, "titulaire"},

    {"a2", "Hakimi", "Achraf", 2, "defenseur", 26, 5, "titulaire"},
    {"a3", "Saiss", "Romain", 6, "defenseur", 34, 3, "titulaire"},
    {"a4", "Mazraoui", "Noussair", 3, "defenseur", 27, 2, "titulaire"},

    {"a5", "Amrabat", "Sofyan", 4, "milieu", 29, 1, "titulaire"},
    {"a6", "Ounahi", "Azzedine", 8, "milieu", 25, 4, "titulaire"},
    {"a7", "Pedri", "Gonzalez", 10, "milieu", 21, 7, "titulaire"},

    {"a8", "Messi", "Lionel", 30, "attaquant", 37, 800, "titulaire"},
    {"a9", "Neymar", "Junior", 11, "attaquant", 33, 400, "titulaire"},
    {"a10", "Ronaldo", "Cristiano", 7, "attaquant", 40, 850, "titulaire"}};

int nbJoueur = 10;

void ajouter()
{
    int choixposte;
    int choixstatut;

    sprintf(j[nbJoueur].id, "a%d", nbJoueur + 1);

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
    printf(" 2 : remplacant\n");
    scanf("%d", &choixstatut);

    switch (choixstatut)
    {
    case 1:
        strcpy(j[nbJoueur].statut, "titulaire");
        break;
    case 2:
        strcpy(j[nbJoueur].statut, "remplacant");
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
            int cmpg = 1;
            for (int i = 0; i < nbJoueur; i++)
            {
                if (stricmp(j[i].poste, "gardien") == 0)
                {

                    printf("-----le gardiens numero %d------\n", cmpg++);
                    printf("ID: %s | Nom: %s | Prenom: %s | Poste: %s | Age: %d | Maillot: %d | Buts: %d\n",
                           j[i].id, j[i].nom, j[i].prenom, j[i].poste, j[i].age, j[i].numeroMaillot, j[i].buts);
                }
            }
            cmpg=1;

            for (int i = 0; i < nbJoueur; i++)
            { 
                if (stricmp(j[i].poste, "defenseur") == 0)
                {
                    printf("-----le defenseur numero %d------\n", cmpg++);
                    printf("ID: %s | Nom: %s | Prenom: %s | Poste: %s | Age: %d | Maillot: %d | Buts: %d\n",
                           j[i].id, j[i].nom, j[i].prenom, j[i].poste, j[i].age, j[i].numeroMaillot, j[i].buts);
                }
            }
            cmpg=1;

            for (int i = 0; i < nbJoueur; i++)
            {  
                if (stricmp(j[i].poste, "milieu") == 0)
                {

                    printf("-----le milieu numero %d------\n", cmpg++);
                    printf("ID: %s | Nom: %s | Prenom: %s | Poste: %s | Age: %d | Maillot: %d | Buts: %d\n",
                           j[i].id, j[i].nom, j[i].prenom, j[i].poste, j[i].age, j[i].numeroMaillot, j[i].buts);
                }
            }
            cmpg=1;

            for (int i = 0; i < nbJoueur; i++)
            {  
                if (stricmp(j[i].poste, "attaquant") == 0)
                {
                    printf("-----le attaquant numero %d ------\n", cmpg++);
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

void modifier()
{
    int choixpostem;
    char searchId[50];
    printf("entrer ID de joueur a modifier:\n");
    getchar();
    fgets(searchId, sizeof(searchId), stdin);
    searchId[strcspn(searchId, "\n")] = '\0';

    for (int i = 0; i < nbJoueur; i++)
    {
        if (stricmp(searchId, j[i].id) == 0)
        {
            printf("entrer le nouveau poste de joueur : \n");
            printf("----choisir le poste de joueur : \n");
            printf(" 1 : gardien \n");
            printf(" 2 : defenseur \n");
            printf(" 3 : milieu \n");
            printf(" 4 : attaquant \n");
            scanf("%d", &choixpostem);
            switch (choixpostem)
            {
            case 1:
                strcpy(j[i].poste, "gardien");
                break;
            case 2:
                strcpy(j[i].poste, "defenseur");
                break;
            case 3:
                strcpy(j[i].poste, "milieu");
                break;
            case 4:
                strcpy(j[i].poste, "attaquant");
                break;

            default:
                printf("Choix invalide.\n");
                break;
            }
            printf("entrer le nouveau age de joueur  : \n");
            scanf("%d", &j[i].age);
            getchar();
            printf("entrer combient de buts le joueur a marque : \n");
            scanf("%d", &j[i].buts);
            getchar();
        }
    }
}

void supprimer(){
    
}

int main(){

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
            modifier();
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

