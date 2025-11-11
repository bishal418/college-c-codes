#include <stdio.h>

int main() {
    char choice;
    float num1, num2, result;

    printf("simple calculator using switch-case\n");
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (choice) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n",result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
    }

    return 0;
}
