#include<stdio.h>
#include<string.h>
int main()
{
	char first_line[10001], second_line[2];
	int count, i, t;
	scanf("%d", &t);
	for(i=0; i<t; i++){
		count=0;
		scanf(" %[^\n]", first_line);
		scanf("%s", second_line);
		for(int j=0; j<strlen(first_line); j++){
			if(second_line[0]==first_line[j]){
				count++;
			}
		}
		if(count==0){
		printf("'%c' is not present.\n", second_line[0]);
	}
	else{
		printf("Occurence of '%c' in '%s'= %d\n", second_line[0], first_line, count);
	}
	}
	
	