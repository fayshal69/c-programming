#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    int n,i,j;
    float sum =0,fact=1;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        fact =1;
        for(j=1;j<=i;j++){
            fact*=j;
        }
        sum=sum+i/fact;
    }

    printf("%.4f\n",sum);
    }
    return 0;
}

