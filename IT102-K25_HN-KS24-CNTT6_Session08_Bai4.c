#include<stdio.h>
int main() {
    int arr[100], element;
    printf("Nhap so phan tu trong mang:");
    scanf("%d",&element);
    for (int i = 0; i < element; i++) {
        printf("Nhap phan tu thu %d = ", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < element; i++) {
        printf("arr[%d] = %d\n", i+1, arr[i]);
    }
    return 0;
}