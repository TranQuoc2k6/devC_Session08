#include<stdio.h>
int main(){
	int array[5]={1,2,3,4,5},i;
	for( i=0;i<5;i++){
		printf(" %d",array[i]);
	}
	printf("\n");
	for(i=4;-1<i;i--){
		printf(" %d",array[i]);
	}
	return 0;
}
