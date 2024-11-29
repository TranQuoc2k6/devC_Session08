#include<stdio.h>
int main(){
	int arr[3][3]={{12,24,99},{7,89,60},{74,8,34}};
	int max=arr[0][0],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %d",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		for( j=0;j<3;j++){
			if(arr[i][j]>max){
				max=arr[i][j];
			}
		}
	}
	printf("Phan tu lon nhat trong mang la: %d",max);
	return 0;
}
