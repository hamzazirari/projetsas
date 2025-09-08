#include<stdio.h>
#include<string.h>
int main(){
    typedef struct{
        char titre[50];
        char auteur[50];
        float prix;
        int quantite;
    }livre;

    int n,i,j;

    printf("entrer combien de livre voulez vous ajouter");
    scanf("%d",&n);

    livre t[n];
    for(i=0;i<n;i++){
        printf("le livre numero %d\n",i+1);

        printf("entrer le titre");
        scanf("%s",t[i].titre);

         printf("entrer l auteur");
        scanf("%s",t[i].auteur);

         printf("entrer le prix");
        scanf("%f",&t[i].prix);

         printf("entrer la Quantité en stock.\n");
        scanf("%d",&t[i].quantite);

        
    }

    for(i=0;i<n;i++){
        printf("le livre numero %d\n",i+1);

        printf("le titre est %s\n",t[i].titre);

         printf("l auteur est %s\n",t[i].auteur);

         printf("le prix est %f\n",t[i].prix);

         printf("la quantite dans le stock est %d\n",t[i].quantite);      
    }



    int modifier;
    char modtitre[50];

    printf("voulez vous modifier un livre ecrire 1 si oui ecrire 0 si non\n");
    scanf("%d",&modifier);

    if(modifier==1){
        printf("entrer le titre de livre que vous voulez modifier\n");
        scanf("%s",modtitre);

        for(i=0;i<n;i++){
            if(strcmp(t[i].titre,modtitre)==0){
                printf("ecrire le nouveau titre\n");
                scanf("%s",t[i].titre);
                printf("ecrire la nouveau  Quantite en stock\n");
                scanf("%d",&t[i].quantite);

                printf("les modification sont ajouter avec succes\n");
                break;
            }else{
                printf("livre introuvable\n");
            }
        }
        
    }else if(modifier==0){
        printf("aucun chose a modifier merci");
    }


        int suprimer;
    char suptitre[50];

    printf("voulez vous suprimer un livre ecrire 1 si oui ecrire 0 si non\n");
    scanf("%d",&suprimer);

    if(suprimer==1){
        printf("entrer le titre de livre que vous voulez suprimer\n");
        scanf("%s",suptitre);

        for(i=0;i<n;i++){
            if(strcmp(t[i].titre,suptitre)==0){
                for(j=i;j<n-1;j++){
                    t[j]=t[j+1];
                }
                n--;
                
                printf("les suspression sa fait avec succes\n");

                break;
            }else{
                printf("livre introuvable\n");
            }
        }
        
    }else if(suprimer==0){
        printf("aucun chose a suprimer merci");
    }
        for(i=0;i<n;i++){
        printf("le livre numero %d\n",i+1);

        printf("le titre est %s\n",t[i].titre);

         printf("l auteur est %s\n",t[i].auteur);

         printf("le prix est %f\n",t[i].prix);

         printf("la quantite dans le stock est %d\n",t[i].quantite);      
    }





    return 0;
}