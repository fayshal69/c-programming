#include<stdio.h>
int main()
{
	int t, num;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &num);
		int sum = 0;
		sum = num/10000;
		sum = sum + (num%10);
		printf("Sum = %d\n", sum);
	}
	
	
	
    return 0;
}
