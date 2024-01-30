#include<stdio.h>
#include<string.h>
int main()
{
	int t;
    scanf("%d",&t);
    while(t--){
    	char a[1001], rev[1001];
    	scanf(" %[^\n]", a);
    	int i=0, j=0, k=0;
    	for(i=0; i<strlen(a); i++){
    		if(a[i]!=' '){
    			rev[j]=a[i];
    			j++;
			}
			else{
				for(k=j-1; k>=0; k--){
					printf("%c", rev[k]);
				}
				printf(" ");
				j=0;
			}
		}
		for(k=j-1; k>=0; k--){
			printf("%c", rev[k]);
		}
		printf("\n");
	}
	
    return 0;
}
