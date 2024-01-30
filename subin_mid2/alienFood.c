#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int count =0;
        double a;
        scanf("%lf",&a);
        while(a>=1){
            a=a/2;
            count++;
        }
        printf("%d days\n",count);
    }

    return 0;
}
