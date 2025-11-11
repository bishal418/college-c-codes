#include <stdio.h>
int* getelemet(int arr[], int index) {
    return &arr[index];
}
int main() {
    int arr[5] = {4,8,12,16,20};
    int* p = getelemet(arr, 2);
    printf("elements at index 2 = %d\n", *p);
    return 0;
}
