#include<stdio.h>
int main() {
    int arr[100], element;
    printf("Nhap so phan tu trong mang:");
    scanf("%d", &element);
    for (int i = 0; i < element; i++) {
        printf("Phan tu thu %d:", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < element; i++) {
        if (arr[i] > 2 && arr[i] % 2 != 0 || arr[i] == 2) {
            printf("%d la so nguyen to co trong mang\n", arr[i]);
        }
    }
    return 0;
}