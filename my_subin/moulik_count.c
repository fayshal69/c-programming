#include<stdio.h>
#include<string.h>
int main()
{
	int t;
    scanf("%d",&t);
    while(t--){
    	int a, b;
    	scanf("%d %d", &a, &b);
    	int i, j, count=0;
    	for(i=a; i<=b; i++){
    		for(j=2; j<i; j++){
    			if(i%j==0)
    			break;
			}
			if(i==j)
			count++;
		}
		printf("%d\n", count);
	}
	
    return 0;
}
