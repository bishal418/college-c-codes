#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    printf("\nChoose an operation:\n");
    printf("1. Find length of first string\n");
    printf("2. Concatenate strings\n");
    printf("3. Copy second string into first\n");
    printf("4. Compare strings\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Length of s1: %lu\n", strlen(s1));
            break;

        case 2:
            strcat(s1, s2);
            printf("After concatenation: %s\n", s1);
            break;

        case 3:
            strcpy(s1, s2);
            printf("After copying s2 to s1: %s\n", s1);
            break;

        case 4: {
            int cmp = strcmp(s1, s2);
            if (cmp == 0)
                printf("Strings are equal.\n");
            else if (cmp < 0)
                printf("s1 is smaller than s2.\n");
            else
                printf("s1 is greater than s2.\n");
            break;
        }

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
