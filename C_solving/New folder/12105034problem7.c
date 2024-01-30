#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    int i,count=1;
    char h[10001];
    scanf(" %[^\n]",h);
    for(i=0;i<strlen(h);i++)
    {
    if(h[i]==' ' && h[i+1]!=' ')
    {
    count++;
    }
    }
    printf("%d\n",count);
    }

    return 0;
}
