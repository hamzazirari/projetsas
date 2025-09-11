void modifier()
{
    int choixpostem;
    char searchId[50];
    printf("entrer ID de joueur a modifier:\n");
    getchar();
    fgets(searchId, sizeof(searchId), stdin);

    for (int i = 0; i < nbJoueur; i++)
    {
        if (strcmp(searchId, j[i].id) == 0)
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
            printf("entrer le nouveau age de joueur  : \n");
            scanf("%d", &j[nbJoueur].age);
            getchar();
            printf("entrer combient de buts le joueur a marque : \n");
            scanf("%d", &j[nbJoueur].buts);
            getchar();
        }
    }
}