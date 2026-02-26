#include <stdio.h>
int main() {
    FILE *fp;
    fp = fopen("C:\\Users\\bishal418\\OneDrive\\Documents\\cp.txt", "w");
    if (fp == NULL) {
        printf("file cannot be opened\n");
        return 1;
    }
    fprintf(fp, "welcome to file Handling in c\n");
    fprintf(fp, "this text is written to the file.\n");
    fclose(fp);
    printf("data written to the file successfully\n");
    return 0;
}
9+8
