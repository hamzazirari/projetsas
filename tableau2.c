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
    int min;
    min=t[0];

    for(i=0;i<n;i++){
        if(t[i]<min){
            min=t[i];
        }
    }
    printf("le min est %d",min);

   return 0;
  } 