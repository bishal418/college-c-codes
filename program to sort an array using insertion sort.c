// Program: Insertion Sort
#include <stdio.h>

int main() {
    int arr[5] = {25, 12, 22, 64, 11};
    int i, key, j;

    // Insertion Sort algorithm
    for(i = 1; i < 5; i++) {
        key = arr[i];
        j = i - 1;

        // Shift elements greater than key to the right
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        // Insert key at the correct position
        arr[j + 1] = key;
    }

    // Print the sorted array
    printf("Sorted Array: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
