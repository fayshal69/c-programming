#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    int i,count =0;
    char s[1001];
    scanf(" %[^\n]",s);
    for(i=0;i<strlen(s);i++){
        if(s[i]>='a' && s[i]<='z'){
            if(s[i]=='a'|| s[i]=='e'||s[i]== 'i'||s[i]== 'o'||s[i]== 'u'){
                count++;
            }else{
                continue;
            }
        }
    }
         printf("Number of vowels = %d\n",count);
    }

    return 0;
}
