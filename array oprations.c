#include <stdio.h>
int main() {
    int arr[100],n;
    int i, n_postive = 0, n_negative = 0, n_zero = 0;
    int N_negative = 0, N_zero = 0;
    int N_even = 0, N_odd = 0;

    printf("enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if(arr[i] > 0)
        n_postive++;
        else if(arr[i] < 0) {
            n_negative++;
        }
        else
            n_zero++;
        if(arr[i] %2 == 0)
        N_even++;
        else
            N_odd++;
    }
    printf("\nARRAY STATISTICS\n");
    printf("total elements: %d\n", n);
    printf("positive elements: %d\n", n_postive);
    printf("negative elements: %d\n", n_negative);
    printf("zeros: %d\n", n_zero);
    printf("even elements: %d\n", N_even);
    printf("odd elements: %d\n", N_odd);

    return 0;
}
