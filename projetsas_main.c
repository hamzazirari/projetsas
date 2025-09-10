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