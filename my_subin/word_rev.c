#include<stdio.h>
#include<string.h>
int main()
{
	int t;
    scanf("%d",&t);
    while(t--){
    	char ar[1001], rev[1001];
    	scanf("%s", ar);
    	int i, j;
    	for(i=strlen(ar)-1, j=0; i>=0; i--, j++){
    	rev[j]=ar[i];	
		}
		rev[j]='\0';
		printf("%s\n", rev);
	}
	
    return 0;
}
