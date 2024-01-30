#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
    	int n, count = 0;
		scanf("%d", &n);
		for(int i = 5; i <= n; i = i * 5) {
			count += (n/i);
		}
		printf("%d\n", count);	
	}
    
    
    
    
    
    
    return 0;
}