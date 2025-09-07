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
    int max;
    max=t[0];

    for(i=0;i<n;i++){
        if(t[i]>max){
            max=t[i];
        }
    }
    printf("le max est %d",max);

   return 0;
  } 