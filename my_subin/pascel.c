#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int row, ncr, n, r;
        scanf("%d", &row);
        for(n=0; n<=row; n++){
        	for(r=0; r<=n; r++){
        		if(n==0 || r==0){
        			ncr=1;
        			printf("%d ",ncr);
				}
				else{
					ncr= ncr*(n-r+1)/r;
					printf("%d ",ncr);
				}
			}
			printf("\n");
		}
		printf("\n");
        
        
       

    }
     return 0;
}
