#include<stdio.h>
int main(){
	int array[5]={12,4,5,7,8};
	int n,found,i;
	do{
		printf("so bat ki la:");
	    scanf("%d",&n);
		found=0;
		for( i=0;i<5;i++){
		if(array[i]==n){
			printf("Vi tri phan tu trong mang la: %d\n",i+1);
			found=1;
			break;
		}
	}
		if(found==0){
			printf("khong ton tai\n");
		}	
	}while(found==0);
	return 0;
}
