#include<stdio.h>
int main(){
	int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int sum=0,i,j;
	int rows=4,cols=4;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf(" %d",arr[i][j]);
		}
		printf("\n");
	}
		printf("Duong cheo chinh la:");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			if(i==j){
				printf(" %d",arr[i][j]);
			}
		}
	}
	printf("\n");
	for(i=0;i<rows;i++){
		for( j=0;j<cols;j++){
			if(i==j){
				sum+=arr[i][j];
			}
		}
	}
	return 0;
}
