#include <stdio.h>
#include<string.h>
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
    	char h[10001];
    	int count = 1;
    	scanf(" %[^\n]", &h);
    	for(int i = 0; i < strlen(h); i++) {
    		if(h[i]==' ' && h[i+1]!=' ') {
    			count++;
			}
		}
		
		printf("%d\n", count);	
	}
    
    
    
    
    
    
    return 0;
}