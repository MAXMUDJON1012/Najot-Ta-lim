#include <stdio.h>
int sum_of_arr(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size;i++) {
        if (arr[i] % 3 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}
int main() {
    int arr1[] = {3, 6, 9, 12, 15, 18, 20};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr3[] = {30, 33, 36, 39, 42, 100};
    printf("1-massiv yig'indisi: %d\n", sum_of_arr(arr1, 7));
    printf("2-massiv yig'indisi: %d\n", sum_of_arr(arr2, 9));
    printf("3-massiv yig'indisi: %d\n", sum_of_arr(arr3, 6));
    
    return 0;
}