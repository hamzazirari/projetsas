#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    printf("entrer la taille de tableau");
    scanf("%d",&n);
    int t[n];

    for(i=0;i<n;i++){
        printf("entrer le [%d] element de tableau \n",i);
        scanf("%d",&t[i]);
    }
    int som=0;

    for(i=0;i<n;i++){
        som=som+t[i];
    }
    printf("la somme des elements de tableau est %d",som);

   return 0;
  } 