#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		char ar[10001];
		char x[2];
		scanf(" %[^\n]", ar);
		scanf("%s", x);
		int i, count=0;
		for(i=0; i<strlen(ar); i++){
			if(ar[i]==x[0]){
				count++;
			}
			else{
				continue;
			}
		}
		if(count==0){
			printf("'%c' is not present",x[0]);
           
    	}else{
        printf("Occurrence of '%c' in '%s' = %d\n",x[0],ar,count);
    	}
	}
	
	
	
    return 0;
}
