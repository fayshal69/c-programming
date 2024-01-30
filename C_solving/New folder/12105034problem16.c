#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int i,k=0,d;
        char n[1001];
        scanf(" %[^\n]",n);
        char word[50];

        for(i=0;i<strlen(n);i++){
            if(n[i]!=' '){
                word[k]=n[i];
                k++;
            }else{
               for(d=k-1;d>=0;d--){
                printf("%c",word[d]);
               }
               k=0;
               printf(" ");
            }
        }
            for(d=k-1;d>=0;d--){
                printf("%c",word[d]);
            }
            printf("\n");

        }
    return 0;
}
