#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char s[101];
        scanf("%s",s);
        int i;
        for(i=0;i<strlen(s);i++){
            if(s[i]>='A' && s[i]<='Z'){
            printf("%d",s[i]-64);
        }
        }
        printf("\n");
    }

    return 0;
}
