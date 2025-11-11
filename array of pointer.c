#include <stdio.h>

void fill(int (*p)[10]) {
    for (int i = 0; i < 10; i++) {
        (*p)[i] = i * i;
    }
}

int main(void) {
    int a = 1, b = 2, c = 3;
    int *arr[3] = {&a, &b, &c};

    for (int i = 0; i < 3; i++) {
        printf("%d ", *arr[i]);
    }

    return 0;
}
