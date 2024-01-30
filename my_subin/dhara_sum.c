#include<stdio.h>
#include<string.h>
int main()
{
	int t;
    scanf("%d",&t);
    while(t--){
    	int n, i, j;
    	scanf("%d", &n);
    	float fact, sum=0;
    	for(i=1; i<=n; i++){
    		fact=1;
    		for(j=1; j<=i; j++){
    			fact=fact*j;
			}
			sum = sum + (i/fact);
		}
    	printf("%.4f\n", sum);
	}
	
    return 0;
}
