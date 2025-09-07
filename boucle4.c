#include<stdio.h>
int main(){
    int i,n;

    printf("entrer un nombre");
    scanf("%d",&n);

    int rest,inv=0;
    
    while(n!=0){
        rest=n%10;
        inv=inv*10+rest;
        n=n/10;
    }
    printf("le nombre inverse est %d",inv);
    return 0;
}