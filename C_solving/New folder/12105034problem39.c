#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        for(int i=1; i<=c; i++){
        	if(i%a==0 && i%b==0){
        		printf("%d\n", i);
			}
		}
    }

    return 0;
}
