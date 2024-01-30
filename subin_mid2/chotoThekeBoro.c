#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++) {
    	int a, b, c, temp;
    	scanf("%d %d %d", &a, &b, &c);
    	if(a > b) {
    		temp = a;
    		a = b;
    		b = temp;
		}
		if(b > c) {
    		temp = b;
    		b = c;
    		c = temp;
		}
		if(a > b) {
    		temp = a;
    		a = b;
    		b = temp;
		}
		printf("Case %d: %d %d %d\n", i, a, b, c);
	}
    
    
    
    
    
    
    return 0;
}