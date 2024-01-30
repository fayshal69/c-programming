#include<stdio.h>
int main()
{
	int t, n, i;
	int a, b, sum;
	scanf("%d", &t);
	for(i=0; i<t; i++){
		scanf("%d", &n);
		a=n/10000;
		b=n%10;
		sum=a+b;
		printf("Sum = %d\n", sum);
	}
	
    return 0;
}
