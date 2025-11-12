#include <stdio.h>

int main() {
    int arr[5] = {25, 12, 22, 64, 11};
    int i, j, temp;

    // Bubble Sort logic
    for(i = 0; i < 5 - 1; i++) {
        for(j = 0; j < 5 - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted Array: ");
    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}
