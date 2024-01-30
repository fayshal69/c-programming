#include<stdio.h>
#include<string.h>
int main()
{
	int t;
    scanf("%d",&t);
    while(t--){
    	char ar[1001];
    	scanf(" %[^\n]", ar);
    	int count=0;
    	for(int i=0; i<strlen(ar); i++){
    		if(ar[i]=='a' || ar[i]=='e' || ar[i]=='i' || ar[i]=='o' || ar[i]=='u'){
    			count++;
			}
		}
		printf("Number of vowels = %d\n", count);
	}
	
    return 0;
}
