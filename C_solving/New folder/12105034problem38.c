#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,i,j;
        scanf("%d%d",&a,&b);
        for(i=1;i<=a;i++){
            for(j=1;j<=i;j++){
                printf("%d ",b);
                
            }
            printf("\n");
        }
        for(i=a-1;i>=1;i--){
            for(j=1;j<=i;j++){
                printf("%d ",b);
                
            }
            printf("\n");
        }

    }


    return 0;
}
