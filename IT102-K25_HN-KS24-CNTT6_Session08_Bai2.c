#include<stdio.h>
int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d:", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n",i+1, arr[i]);
    }
    return 0;
}