#include<stdio.h>
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
    int moy;
    moy=som/n;
    printf("le moyenne est %d",moy);

   return 0;
  } 