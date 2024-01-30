#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--){

        int n,s1,s2,s;
        scanf("%d",&n);
        s1=n%10;
        s2=n/10000;
        s=s1+s2;
        printf("Sum = %d\n",s);

        }
    return 0;
}
