#include<stdio.h>
#include<string.h>
int main()
{
	int t;
    scanf("%d",&t);
    while(t--){
    	char ar[1001];
    	scanf(" %[^\n]", ar);
    	for(int i=0; i<strlen(ar); i++){
    		if(ar[i]=='a' || ar[i]=='e' || ar[i]=='i' || ar[i]=='o' || ar[i]=='u'){
    			printf("%c", ar[i]);
			}
		}
		printf("\n");
		for(int i=0; i<strlen(ar);i++){
        if(ar[i]!='a' && ar[i]!='e' && ar[i]!='i' && ar[i]!= 'o' && ar[i]!='u' && ar[i]!=' '){
            printf("%c",ar[i]);
        }
        }
		printf("\n");
		
	}
	
    return 0;
}
