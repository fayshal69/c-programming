#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		char ar[1001];
		scanf("%s", ar);
		int count[26]={0};
		for(int i=0; i<strlen(ar); i++){
			if(ar[i]>='a' && ar[i]<='z'){
				count[ar[i]-'a']++;
			}
		}
		for(int i=0; i<26; i++){
			if(count[i]!=0){
				printf("%c = %d\n", i+'a', count[i]);
			}
		}
	}
	
	
    return 0;
}
