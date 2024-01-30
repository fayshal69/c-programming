#include<stdio.h>
int main()
{
	int t;
    scanf("%d",&t);
    while(t--){
    	int n;
    	scanf("%d", &n);
    	int rev=0;
    	while(n!=0){
    		rev= rev*10;
    		rev= rev+(n%10);
    		n= n/10;
		}
		printf("%d\n", rev);
	}
    
	
    return 0;
}
