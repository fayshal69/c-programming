#include<stdio.h>
#include<string.h>
int main()
{
	int t;
    scanf("%d",&t);
    while(t--){
    	char a[101];
    	scanf("%s", a);
    	for(int i=0; i<strlen(a); i++){
    		if(a[i]>='A' && a[i]<='Z')
    		printf("%d", a[i]-64);
		}
		printf("\n");
	}
	
    return 0;
}
