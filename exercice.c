#include<stdio.h>
int main(){
    int i,n,prod=125;

    printf("entrer le nombre de produit que vous voulez acheter");
    scanf("%d",&n);
    float total,totalf,red=0;
    
    
    for(i=0;i<=n;i++){
            total=(n-1)*125-(125*red/100);
            totalf=total+125;
            red=red + 2;
        
    }
    printf("le prix total est%f",totalf);

    

}