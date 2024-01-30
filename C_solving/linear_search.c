#include <stdio.h>

int main()
{
	int num[]={1, 5, 7, 9, 12, 15, 17};
	int i, value, pos=-1;
	scanf("%d", &value);
	for(i=0; i<7; i++){
		if(value==num[i]){
			pos=i+1;
		
			break;
		
	}
}
	if(pos==-1){
		printf("Value not found\n");
	}
	else{
		printf("Value found in %d position\n", pos);
	}
	

    

    return 0;
}
