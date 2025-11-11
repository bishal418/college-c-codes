#include <stdio.h>

void inputarray(int *arr, int n);
void displayarray(const int *arr, int n);
int sumarray(int *arr, int n);
int countpositive(int *arr, int n);
int countnegative(int *arr, int n);

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    inputarray(arr, n);

    printf("\nArray elements: ");
    displayarray(arr, n);

    int sum = sumarray(arr, n);
    printf("\nSum of array elements: %d\n", sum);

    int poscount = countpositive(arr, n);
    int negcount = countnegative(arr, n);

    printf("Number of positive elements: %d\n", poscount);
    printf("Number of negative elements: %d\n", negcount);

    return 0;
}

void inputarray(int *arr, int n) {
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void displayarray(const int *arr, int n){
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sumarray(int *arr, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int countpositive(int *arr, int n) {
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            cnt++;
        }
    }
    return cnt;
}

int countnegative(int *arr, int n) {
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
            cnt++;
        }
    }
    return cnt;
}
