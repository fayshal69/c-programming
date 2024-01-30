#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int i;
        char s[1001];
        scanf(" %[^\n]",s);
        for(i=0;s[i]!='\0';i++){
        if(s[i]=='a' || s[i]=='e' ||s[i]=='i'|| s[i]=='o'|| s[i]=='u'){
            printf("%c",s[i]);
        }
        }
        printf("\n");

        for(i=0;s[i]!='\0';i++){
        if(s[i]!='a' && s[i]!='e'&& s[i]!='i'&& s[i]!= 'o'&& s[i]!='u'&& s[i]!=' '){
            printf("%c",s[i]);
        }
        }
        printf("\n");
    }
    return 0;
}
