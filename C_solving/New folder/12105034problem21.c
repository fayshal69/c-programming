#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int i;
        char s[10001];
        scanf(" %[^\n]",s);
        for(i=strlen(s)-1;i>=0;i--){
            printf("%c",s[i]);
        }
        printf("\n");
    }

    return 0;
}
