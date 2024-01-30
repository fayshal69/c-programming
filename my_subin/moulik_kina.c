#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,count=0;
        scanf("%d",&n);
        for(i=2;i<n;i++){
            if(n%i==0){
                count++;
            }
        }
        if(count==0){
            printf("%d is a prime\n",n);
        }else{
            printf("%d is not a prime\n",n);
        }
    }

    return 0;
}
