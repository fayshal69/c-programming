#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){

        int i,count =1;
        char s[10001];
        scanf(" %[^\n]",s);
        for(i=0;i<=strlen(s);i++){
            if(s[i]==' '){
                count++;
            }
        }
        printf("Count = %d\n",count);

    }

    return 0;
}
