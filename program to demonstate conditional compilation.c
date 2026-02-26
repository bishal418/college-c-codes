#include <stdio.h>
#define DEBUG
int main() {
    int a = 5;
    int b = 10;
    int sum = a + b;
    #ifdef DEBUG
    printf("Debug: a = %d, b = %d\n", a, b);
    #endif
    printf("The sum of a and b is: %d\n", sum);
    return 0;
}
