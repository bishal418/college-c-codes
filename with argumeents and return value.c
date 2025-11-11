#include <stdio.h>
int sum (int a, int b) {
    return a + b;
}
int main () {
    int result = sum(10,5);
    printf("The sum: %d\n", result);
}
