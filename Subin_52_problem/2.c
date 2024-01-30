#include<stdio.h>

int main()
{
    int n, m, a, b, c, d, z, sum;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
    	scanf("%d", &m);
    	 a=m/10000;
    	 b=m%10000;
    	 c=b%1000;
    	 d=c%100;
    	 z=c%10;
    	sum=a+z;
    	printf("Sum = %d\n", sum);
	}
	
		
	 return 0;
}