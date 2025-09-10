#include<stdio.h>
void fusion(int t[],int g,int m, int d){
    int i, j, k;
    int n1 = m - g + 1;
    int n2 = d - m;
    int tg[n1], td[n2];

    for (i=0; i < n1; i++)
    {
        tg[i] = t[g + 1];
    }

    for (j = 0; j < n2; j++)
    {
        td[i] = t[j + m + 1];
    }

    i = 0;
    j = 0;
    k = g;

    while (i < n1 && j < n2)
    {
        if (tg[i] <= td[j])
        {
            t[k] = tg[i];
            i++;
        }
        else
        {
            t[k] = td[i];
            j++;
        }   
        k++;
    } 

    while (i < n1) 
    {
        t[k] = tg[i];
        i++;
        k++;
    }

    while (j < n2) 
    {
        t[k] = td[j];
        j++;
        k++;
    }
    
}
void trifusion(int t[],int g, int d){
    if(g<d){
        int m=(g+d)/2;
        trifusion(t,g,m);
        trifusion(t,m+1,d);
        fusion(t,g,m,d);

    }
}







void affichage(int t[],int taille){
    for(int i=0 ; i <  taille ;i++){
        printf("%d",t[i]);
    }printf("\n");
}
int main(){
    int taille=6;
    int t[]={20,12,10,35,25,0};
    printf("tableau initial : \n");
    affichage(t,taille);
    trifusion(t,0,taille-1);
    printf("tableau trie");
    affichage(t,taille);

    return 0;
}