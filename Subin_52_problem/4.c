#include<stdio.h>
int main()
{
int i,j,n,m;
scanf("%d",&n);
for(i=1; i<=n; i++){
	
	scanf("%d", &m);
	printf("case %d:",i);
	for(j=1; j<=m; j++){
		if(m%j==0)
		{
			printf(" %d", j);
		}
	}
	printf("\n");
}


	return 0;
}