#include<stdio.h>
int main(){
    int n;

    printf("entrer un nombre");
    scanf("%d",&n);

    int i;

    for(i=1;i<=n;i++){
        printf("%d",i*2);
        
    }

   
    return 0;
}