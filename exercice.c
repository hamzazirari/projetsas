#include<stdio.h>
int main(){
    int i,n,prod=125;

    printf("entrer le nombre de produit que vous voulez acheter");
    scanf("%d",&n);
    float total,totalf,red=0;
    
    
    for(i=2;i<=n;i++){
            red=i*2;
            total=(n-1)*125-(125*red/100);
            totalf=total+125;
        
        
    }
    printf("le prix total est%f",totalf);

    

}