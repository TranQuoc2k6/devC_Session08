#include<stdio.h>
int main() {
    int arr[5] = {1, 2, 4, 3, 5};
    int size_arr = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size_arr; i++) {
        printf("%d\n", arr[i]);
    }
    printf("Do dai cua mang la: %d", size_arr);
    return 0;
}