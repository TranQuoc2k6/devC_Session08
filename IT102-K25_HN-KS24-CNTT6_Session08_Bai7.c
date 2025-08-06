#include<stdio.h>
int main() {
    int arr[100], element;
    printf("Nhap so phan tu cua mang:");
    scanf("%d", &element);
    if (element < 0 || element == 0) {
        printf("So phan tu khong hop le");
    }else {
        for (int i = 0; i < element; ) {
            printf("Nhap phan tu thu %d:", i+1);
            scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0) {
                printf("So nhap vao phai la so le. Vui long nhap lai\n");
            }else {
                i++;
            }
        }
        for (int i = 0; i < element; i++) {
            printf("arr[%d] = %d\n", i+1, arr[i]);
        }
    }

    return 0;
}