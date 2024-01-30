#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    	int n;
        scanf("%d", &n);
        int m, i;
        if(n==1 && n==0){
        	m=0;
		}
		else if(n>1){
			for(i=2; i<=n/2; i++){
				if(n%i==0 && n!=i){
				m=0;
				break;	
				}
				else{
					m=1;
				}
		
			}
		}
		if(m==0){
			printf("%d is not a prime\n", n);
		}
		else{
			printf("%d is a prime\n", n);	
		}
        	
    }
    return 0;
}
