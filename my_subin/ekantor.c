#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d", &n);
        int ar[n];
        for(int i=0; i<n; i++){
        	scanf("%d", &ar[i]);
		}
		for(int i=0; i<n; i=i+2){
			printf("%d ", ar[i]);
		}
		printf("\n");

    }

    return 0;
}


