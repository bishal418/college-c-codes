#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "bishal";
    int length = strlen(name);

    for (int i = 1; i <= length; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", name[j]);
        }
        printf("\n");
    }

    return 0;
}
