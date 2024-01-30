#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int i,count[26]={0};
        char s[1001];
        scanf("%s",s);


        for(i=0;i<strlen(s);i++){
            if(s[i]>='a' && s[i]<='z'){
                count[s[i]-'a']++;
            }
        }
        for(i=0;i<26;i++){
            if(count[i]!=0){
                printf("%c = %d\n",'a'+i,count[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
