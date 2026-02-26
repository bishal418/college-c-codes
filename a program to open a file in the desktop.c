#include <stdio.h>

struct student {
    int id;
    char name[50];
    float marks;
    char branch[50];
    char department[50];
    int semester;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student students[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &students[i].id);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("Branch: ");
        scanf("%s", students[i].branch);

        printf("Department: ");
        scanf("%s", students[i].department);

        printf("Semester: ");
        scanf("%d", &students[i].semester);
    }

    printf("\n--- Student Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("Branch: %s\n", students[i].branch);
        printf("Department: %s\n", students[i].department);
        printf("Semester: %d\n\n", students[i].semester);
    }

    return 0;
}
