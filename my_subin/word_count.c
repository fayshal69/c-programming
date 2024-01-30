#include<stdio.h>
#include<string.h>
int main()
{
	int t;
    scanf("%d",&t);
    while(t--){
    	char ar[10001];
        scanf(" %[^\n]",ar);
        int count=0;
        for(int i=0; i<strlen(ar); i++){
        	if(ar[i]==' ')
        	count++;
		}
		printf("%d\n", count+1);
    
	}
	
    return 0;
}
