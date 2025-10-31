#include <stdio.h>

int main() {
    char name[50];        // Array to store full name
    int roll_number;

    printf("Enter student name: ");
    scanf("%s", name);    // Reads name (but only up to first space)

    printf("Enter roll number: ");
    scanf("%d", &roll_number);

    printf("\nStudent Name : %s\n", name);
    printf("Roll Number   : %d\n", roll_number);

    return 0;
}
