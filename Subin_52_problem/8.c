#include<stdio.h>
int main()
{
	int t, n1, n2, n3, temp;
	scanf("%d", &t);
	for(int i=1; i<=t; i++){
		scanf("%d %d %d", &n1, &n2, &n3);
		if(n1<n2 && n1<n3){
			if(n2>n3){
				temp=n3;
				n3=n2;
				n2=temp;
			}
			else{
			n2=n2;
			n3=n3;	
			}
			printf("Case %d: %d %d %d\n", i, n1, n2, n3);
		}
		else if(n2<n1 && n2<n3){
			if(n1>n3){
				temp=n1;
				n1=n3;
				n3=temp;
			}
			else{
				n1=n1;
				n3=n3;
			}
			printf("Case %d: %d %d %d\n", i, n2, n1, n3);
		}
		else{
			if(n1>n2){
				temp=n1;
				n1=n2;
				n2=temp;
			}
			else{
				n1=n1;
				n2=n2;
			}
			printf("Case %d: %d %d %d\n", i, n3, n1, n2);
		}
		
		
		
	}
	
	
	
	return 0;
}