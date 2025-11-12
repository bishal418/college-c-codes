#include <stdio.h>
#define MAX_SIZE 100

void insertSorted(int arr[], int *n, int value) {
    if (*n >= MAX_SIZE) {
        printf("Insertion failed: array is full.\n");
        return;
    }

    int i;
    for (i = *n - 1; i >= 0 && arr[i] > value; i--)
        arr[i + 1] = arr[i];
    arr[i + 1] = value;
    (*n)++;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[MAX_SIZE] = {10, 20, 30, 40, 50};
    int n = 5;
    int value = 35;

    printf("Original array: ");
    printArray(arr, n);

    insertSorted(arr, &n, value);

    printf("Array after insertion: ");
    printArray(arr, n);

    return 0;
}
