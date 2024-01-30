#include<stdio.h>
int main()
{
int arr[]={12, 45, 3, 10, 8};
int i, value, hole;
for(i=1; i<5; i++){
	value=arr[i];
	hole=i;
	while(hole>0 && arr[hole-1]> value){
		arr[hole]=arr[hole-1];
		hole--;
		
	}
	arr[hole]= value;
}	
for(i=0; i<5; i++){
	printf("%d ", arr[i]);
}	
printf("\n");	
	
	
	return 0;
}
