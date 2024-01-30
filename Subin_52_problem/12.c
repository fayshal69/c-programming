#include<stdio.h>
int main()
{
	int t, n, i;
	
	scanf("%d", &t);
	for(i=0; i<t; i++){
		scanf("%d", &n);
		unsigned int fact=1, mod;
		int count=0;
		for(int j=1; j<=n; j++){
			fact=fact*j;
			
		}
		while(fact>0){
			mod=fact%10;
			if(mod==0)
			count++;
			else
			break;
			fact=fact/10;
		}
		printf("%d\n", count);
	}
	
    return 0;
}
