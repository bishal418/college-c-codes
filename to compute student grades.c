#include <stdio.h>

int main() {
    float m1, m2, m3, total, average;
    char grade;

    printf("Enter the subject marks:\n");
    scanf("%f %f %f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    average = total / 3;

    printf("The total marks = %.2f\n", total);
    printf("The average marks = %.2f\n", average);

    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else if (average >= 50)
        grade = 'E';
    else
        grade = 'F';

    printf("Grade: %c\n", grade);

    printf("Subject-wise status:\n");
    if (m1 >= 50)
        printf("Subject 1: Pass\n");
    else
        printf("Subject 1: Fail\n");

    if (m2 >= 50)
        printf("Subject 2: Pass\n");
    else
        printf("Subject 2: Fail\n");

    if (m3 >= 50)
        printf("Subject 3: Pass\n");
    else
        printf("Subject 3: Fail\n");

    return 0;
}
