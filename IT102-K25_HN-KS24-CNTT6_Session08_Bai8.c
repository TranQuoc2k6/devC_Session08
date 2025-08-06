#include<stdio.h>
int main() {
    int arr[100][100];
    int cow, row;
    printf("Nhap so hang cua mang 2 chieu:");
    scanf("%d", &row);
    printf("Nhap so cot cua mang 2 chieu:");
    scanf("%d", &cow);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cow; j++) {
            printf("[%d][%d] = ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cow; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}