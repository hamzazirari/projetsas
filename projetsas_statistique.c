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
    int choixajouter;

    printf(" 1 :: ajouter un joueur\n");
    printf(" 2 :: ajouter plusieur joueur\n");
    scanf("%d", &choixajouter);

    switch (choixajouter)
    {
    case 1:
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
        printf("----------------le joueur a ete ajouter avec succes---------------------\n");

        break;

    case 2:
        int choixmenu;
        int cmp = 1;
        printf("entrer le nombre de joueur voulez vous ajouter\n");
        scanf("%d", &choixmenu);
        for (int i = 0; i < choixmenu; i++)
        {

            sprintf(j[nbJoueur].id, "a%d", nbJoueur + 1);

            printf("Nom du joueur %d : \n", cmp);
            getchar();
            fgets(j[nbJoueur].nom, sizeof(j[nbJoueur].nom), stdin);

            printf("prenom du joueur %d: \n", cmp);
            fgets(j[nbJoueur].prenom, sizeof(j[nbJoueur].prenom), stdin);

            printf("numero de maillot %d : \n", cmp);
            scanf("%d", &j[nbJoueur].numeroMaillot);
            getchar();

            printf("--choisir le poste de joueur %d : \n", cmp);
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

            printf("entrer lage de joueur %d : \n", cmp);
            scanf("%d", &j[nbJoueur].age);
            getchar();

            printf("entrer combient de buts le joueur %d a marque : \n", cmp);
            scanf("%d", &j[nbJoueur].buts);
            getchar();

            printf("--choisir le poste de joueur %d: \n", cmp);
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
            printf("----------------le joueur %d a ete ajouter avec succes---------------------\n", cmp);
            cmp++;
        }
        break;

    default:
        printf("choix invalid");
        break;
    }
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
                printf("=================================================\n");
                printf(" ID        : %s\n", j[i].id);
                printf(" Nom       : %s\n", j[i].nom);
                printf(" Prenom    : %s\n", j[i].prenom);
                printf(" Poste     : %s\n", j[i].poste);
                printf(" Age       : %d\n", j[i].age);
                printf(" Maillot   : %d\n", j[i].numeroMaillot);
                printf(" Buts      : %d\n", j[i].buts);
                printf("=================================================\n");
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

            printf("-------------------les gardiens sont -------------------: \n");
            for (int i = 0; i < nbJoueur; i++)
            {
                if (stricmp(j[i].poste, "gardien") == 0)
                {

                    printf("-----------------------%d----------------\n", cmpg++);
                    printf("=================================================\n");
                    printf(" ID        : %s\n", j[i].id);
                    printf(" Nom       : %s\n", j[i].nom);
                    printf(" Prenom    : %s\n", j[i].prenom);
                    printf(" Poste     : %s\n", j[i].poste);
                    printf(" Age       : %d\n", j[i].age);
                    printf(" Maillot   : %d\n", j[i].numeroMaillot);
                    printf(" Buts      : %d\n", j[i].buts);
                    printf("=================================================\n");
                }
            }
            cmpg = 1;
            printf("-------------------les defenseurs sont -------------------: \n");

            for (int i = 0; i < nbJoueur; i++)
            {
                if (stricmp(j[i].poste, "defenseur") == 0)
                {
                    printf("-----------------------%d----------------\n", cmpg++);
                    printf("=================================================\n");
                    printf(" ID        : %s\n", j[i].id);
                    printf(" Nom       : %s\n", j[i].nom);
                    printf(" Prenom    : %s\n", j[i].prenom);
                    printf(" Poste     : %s\n", j[i].poste);
                    printf(" Age       : %d\n", j[i].age);
                    printf(" Maillot   : %d\n", j[i].numeroMaillot);
                    printf(" Buts      : %d\n", j[i].buts);
                    printf("=================================================\n");
                }
            }
            cmpg = 1;
            printf("-------------------les milieus sont -------------------: \n");

            for (int i = 0; i < nbJoueur; i++)
            {
                if (stricmp(j[i].poste, "milieu") == 0)
                {

                    printf("-----------------------%d---------------------\n", cmpg++);
                    printf("=================================================\n");
                    printf(" ID        : %s\n", j[i].id);
                    printf(" Nom       : %s\n", j[i].nom);
                    printf(" Prenom    : %s\n", j[i].prenom);
                    printf(" Poste     : %s\n", j[i].poste);
                    printf(" Age       : %d\n", j[i].age);
                    printf(" Maillot   : %d\n", j[i].numeroMaillot);
                    printf(" Buts      : %d\n", j[i].buts);
                    printf("=================================================\n");
                }
            }

            cmpg = 1;
            printf("-------------------les attaquants sont -------------------:\n");
            for (int i = 0; i < nbJoueur; i++)
            {
                if (stricmp(j[i].poste, "attaquant") == 0)
                {
                    printf("-----------------------%d----------------\n", cmpg++);
                    printf("=================================================\n");
                    printf(" ID        : %s\n", j[i].id);
                    printf(" Nom       : %s\n", j[i].nom);
                    printf(" Prenom    : %s\n", j[i].prenom);
                    printf(" Poste     : %s\n", j[i].poste);
                    printf(" Age       : %d\n", j[i].age);
                    printf(" Maillot   : %d\n", j[i].numeroMaillot);
                    printf(" Buts      : %d\n", j[i].buts);
                    printf("=================================================\n");
                }
            }

            break;
        default:
            printf("Choix invalide.\n");
            break;
        }
    } while (choixafficher != 0);
}

void modifier()
{
    int choixpostem;
    char searchId[50];
    int choixmod;
    printf(" 1 : Modifier le poste d un joueur.\n");
    printf(" 2 : Modifier l age d un joueur..\n");
    printf(" 3  : Modifier le nombre de buts marques par un joueur..\n");
    scanf("%d", &choixmod);

    switch (choixmod)
    {
    case 1:
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
            }
        }

        break;
    case 2:
        printf("entrer ID de joueur a modifier:\n");
        getchar();
        fgets(searchId, sizeof(searchId), stdin);
        searchId[strcspn(searchId, "\n")] = '\0';

        for (int i = 0; i < nbJoueur; i++)
        {
            if (stricmp(searchId, j[i].id) == 0)
            {
                printf("entrer le nouveau age de joueur  : \n");
                scanf("%d", &j[i].age);
            }
        }
        break;
    case 3:
        printf("entrer ID de joueur a modifier:\n");
        getchar();
        fgets(searchId, sizeof(searchId), stdin);
        searchId[strcspn(searchId, "\n")] = '\0';

        for (int i = 0; i < nbJoueur; i++)
        {
            if (stricmp(searchId, j[i].id) == 0)
            {
                printf("entrer le nouveau age de joueur  : \n");
                scanf("%d", &j[i].age);
            }
        }

        break;

    default:
        printf("choix invalid");
        break;
    }

    printf("----------------le joueur a ete modifier avec succes---------------------\n");
}

void supprimer()
{

    char searchId[50];

    printf("entrer ID de joueur a supprimer:\n");
    getchar();
    fgets(searchId, sizeof(searchId), stdin);
    searchId[strcspn(searchId, "\n")] = '\0';

    for (int i = 0; i < nbJoueur; i++)
    {

        if (stricmp(searchId, j[i].id) == 0)
        {
            for (int k = i; k < nbJoueur - 1; k++)
            {
                j[k] = j[k + 1];
            }
            nbJoueur--;
            break;
        }
    }
    printf("----------------le joueur a ete supprimer avec succes---------------------\n");
}

void rechercher()
{
    int choixcherche;
    printf(" 1: Rechercher un joueur par Identifiant.\n");
    printf(" 2: Rechercher un joueur par Nom.\n");
    scanf("%d", &choixcherche);
    int trouve = 0;
    switch (choixcherche)
    {
    case 1:
        char searchId[50];

        printf("Entrer ID de joueur a rechercher:\n");
        getchar();
        fgets(searchId, sizeof(searchId), stdin);
        searchId[strcspn(searchId, "\n")] = '\0';

        for (int i = 0; i < nbJoueur; i++)
        {
            if (stricmp(searchId, j[i].id) == 0)
            {
                trouve = 1;
                printf("\n================= Joueur Trouve =================\n");
                printf(" ID        : %s\n", j[i].id);
                printf(" Nom       : %s\n", j[i].nom);
                printf(" Prenom    : %s\n", j[i].prenom);
                printf(" Poste     : %s\n", j[i].poste);
                printf(" Age       : %d\n", j[i].age);
                printf(" Maillot   : %d\n", j[i].numeroMaillot);
                printf(" Buts      : %d\n", j[i].buts);
                printf("=================================================\n");

                break;
            }
        }

        if (trouve == 0)
        {
            printf(" Aucun joueur avec l ID \"%s\" n a ete pas trouve.\n", searchId);
        }
        break;
    case 2:

        char searchnom[50];

        printf("Entrer le nom de joueur a rechercher:\n");
        getchar();
        fgets(searchnom, sizeof(searchnom), stdin);
        searchnom[strcspn(searchnom, "\n")] = '\0';

        trouve = 0;

        for (int i = 0; i < nbJoueur; i++)
        {
            if (stricmp(searchnom, j[i].nom) == 0)
            {
                trouve = 1;
                printf("\n================= Joueur Trouve =================\n");
                printf(" ID        : %s\n", j[i].id);
                printf(" Nom       : %s\n", j[i].nom);
                printf(" Prenom    : %s\n", j[i].prenom);
                printf(" Poste     : %s\n", j[i].poste);
                printf(" Age       : %d\n", j[i].age);
                printf(" Maillot   : %d\n", j[i].numeroMaillot);
                printf(" Buts      : %d\n", j[i].buts);
                printf("=================================================\n");

                break;
            }
        }

        if (trouve == 0)
        {
            printf(" Aucun joueur avec l ID \"%s\" n a ete pas trouve.\n", searchnom);
        }

        break;

    default:
        printf("choix invalid");
        break;
    }
}

void statistique()
{
    int choixsta;
    do
    {
        printf("1 : Afficher le nombre total de joueurs dans l equipe.\n");
        printf("2 : Afficher l age moyen des joueurs.\n");
        printf("3 : Afficher les joueurs ayant marque plus de X buts (X introduit par l utilisateur).\n");
        printf("4 : Afficher le meilleur buteur (joueur avec le maximum de buts).\n");
        printf("5 : Afficher le joueur le plus jeune et le plus age.\n");
        printf("0 :quiter");
        scanf("%d", &choixsta);
        switch (choixsta)
        {
        case 1:
            printf(" le nombre total de joueurs dans l equipe est : %d \n", nbJoueur);
            break;
        case 2:
            int somme = 0;
            int agemoy;

            for (int i = 0; i < nbJoueur; i++)
            {
                somme = somme + j[i].age;
            }
            agemoy = somme / nbJoueur;
            printf("lage moyen des joueurs est : %d\n", agemoy);
            break;
        case 3:
            int but;
            int cmpb = 1;

            printf("entrer combient de but voulez vous\n");
            scanf("%d", &but);

            printf("les joueurs ayant marque plus de %d buts sont : \n", but);

            for (int i = 0; i < nbJoueur; i++)
            {
                if (j[i].buts > but)
                {
                    printf("=======================  %d  ==========================\n", cmpb++);
                    printf(" ID        : %s\n", j[i].id);
                    printf(" Nom       : %s\n", j[i].nom);
                    printf(" Prenom    : %s\n", j[i].prenom);
                    printf(" Poste     : %s\n", j[i].poste);
                    printf(" Age       : %d\n", j[i].age);
                    printf(" Maillot   : %d\n", j[i].numeroMaillot);
                    printf(" Buts      : %d\n", j[i].buts);
                    printf("=================================================\n");
                }
            }

            break;
        case 4:

            break;
        case 5:

            break;

        default:
            break;
        }

    } while (choixsta != 0);
}

int main()
{

    int choix;

    do
    {

        printf("======================================= MENU PRINCIPALE ===================================\n");
        printf(" 1 :     ajouter un joueur :\n");
        printf(" 2 :     Afficher la liste de tous les joueurs :\n");
        printf(" 3 :     Modifier un joueur : \n");
        printf(" 4 :     Supprimer un joueur :\n");
        printf(" 5 :     Rechercher un joueur : \n");
        printf(" 6 :     Statistiques : \n");
        printf(" 0:      Quitter. \n");
        printf("===============================================================================================\n");
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
            supprimer();
            break;

        case 5:
            rechercher();

            break;

        case 6:
            statistique();
            break;

        default:
            printf("Choix invalide.\n");
        }

    } while (choix != 0);

    return 0;
}
...