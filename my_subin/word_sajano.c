#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,j;
        scanf("%d",&n);
        char s[1001][1001],temp[1001];

        for(i=0;i<n;i++){
            scanf(" %[^\n]",s[i]);
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(strcmp(s[i],s[j])>0){
                    strcpy(temp,s[i]);
                    strcpy(s[i],s[j]);
                    strcpy(s[j],temp);
                }
            }
        }
        for(i=0;i<n;i++){
            printf("%s\n",s[i]);
            
        }
    }

    return 0;
}
