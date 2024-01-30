#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char a[101];
        scanf("%s",a);
        int i;
        for(i=0;i<strlen(a);i++){
            if(a[i]=='L'){
                a[i]=a[i-1];
            }
            if(a[i]=='R'){
                a[i]=a[i+1];
            }
        }
        printf("%s\n",a);
    }

    return 0;
}
