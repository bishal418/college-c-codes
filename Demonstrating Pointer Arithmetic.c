#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15, 20, 25};   // Initialize array
    int *ptr = arr;                    // Pointer to first element

    // Display initial pointer address and value
    printf("ptr = %p, *ptr = %d\n", ptr, *ptr);

    ptr++;  // Move to next element (adds sizeof(int))
    printf("After ptr++: ptr = %p, *ptr = %d\n", ptr, *ptr);

    ptr += 2;  // Move two elements forward
    printf("After ptr += 2: ptr = %p, *ptr = %d\n", ptr, *ptr);

    return 0;
}
