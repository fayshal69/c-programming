#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	long long int n;
	double sq_root;
	scanf("%d", &t);
	for(int i=1; i<=t; i++){
		
		scanf("%lld", &n);
		sq_root=sqrt(n);
		if(ceil(sq_root)==floor(sq_root)){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
		
		
	}
	
	
	
	return 0;
}