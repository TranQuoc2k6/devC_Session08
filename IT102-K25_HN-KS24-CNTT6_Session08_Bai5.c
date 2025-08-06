#include<stdio.h>
int main() {
    int arr[5] = {8,5,4,10,3};
    int max = arr[0], min = arr[0];
    for (int i = 0; i < 5; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    return 0;
}