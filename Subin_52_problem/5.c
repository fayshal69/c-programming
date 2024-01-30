#include<stdio.h>
int main()
{
	
int i, j, k, n, m;
scanf("%d", &n);
for(i=1; i<=n; i++){
	scanf("%d", &m);
	for(j=1; j<=m; j++){
		for(k=1; k<=m; k++){
			printf("*");
		}
		printf("\n");
	}
	
}	
	
	
	
	
	
	return 0;
}