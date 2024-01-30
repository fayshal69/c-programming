#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    int i,count=0;
    char s[10001],x[2];
    scanf(" %[^\n]",s);
    scanf("%s",x);

    for(i=0;i<strlen(s);i++){

        if(s[i]==x[0]){
            count++;
        }else{
            continue;
        }
    }
    if(count>0){
           printf("Occurrence of '%c' in '%s' = %d\n",x[0],s,count);
    }else{
        printf("'%c' is not present",x[0]);
    }
    }
    return 0;
}
