#include <stdio.h>

struct student {
    int id;
    char name[20];
    float marks;
};

int main() {
    struct student s1 = {101, "Priya", 89.5};
    struct student s2 = {102, "pani", 76.0};
    struct student s3 = {103, "bishal", 92.3};

    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n\n", s1.marks);

    printf("ID: %d\n", s2.id);
    printf("Name: %s\n", s2.name);
    printf("Marks: %.2f\n\n", s2.marks);

    printf("ID: %d\n", s3.id);
    printf("Name: %s\n", s3.name);
    printf("Marks: %.2f\n", s3.marks);

    return 0;
}
