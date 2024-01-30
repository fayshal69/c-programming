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
    	int len=strlen(ar);
    	for(i=len-1, j=0; i>=0; i--, j++){
    		rev[j]=ar[i];
		}
		rev[j]='\0';
		if(strcmp(rev, ar)==0){
			printf("Yes! It is palindeome!");
		}
		else{
			printf("Sorry! It is not palindeome!");
		}
    	
	}
	
    return 0;
}
