#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	int i;
	printf("Enter your birth month= ");
	scanf("%s", a);
	int len=strlen(a);
	for(i=0; i<len; i++){
		printf("%s", a[i]);
	}
	
	
	
	return 0;
}