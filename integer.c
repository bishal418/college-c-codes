#include <stdio.h>

int main()
{
    int num1, num2;
    int sum, difference, product;
    float divide, percentage;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    divide = (float)num1 / num2;
    percentage = (float)num1 / num2 * 100;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    printf("division = %.2f\n", divide);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
