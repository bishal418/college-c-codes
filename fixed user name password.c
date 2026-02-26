#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char user_id[50];
    char password[100];
    int len;
    int has_upper = 0, has_lower = 0, has_digit = 0, has_special = 0;

    printf("Enter User ID: ");
    scanf("%s", user_id);

    printf("Enter password: ");
    scanf("%s", password);

    len = strlen(password);

    if (len < 8 || len > 15) {
        printf("User %s: INVALID (Password length must be 8–15 characters)\n", user_id);
        return 0;
    }

    for (int i = 0; i < len; i++) {
        if (isupper(password[i])) has_upper = 1;
        else if (islower(password[i])) has_lower = 1;
        else if (isdigit(password[i])) has_digit = 1;
        else has_special = 1;
    }

    if (!has_upper || !has_digit || !has_special) {
        printf("User %s: INVALID (Password must contain uppercase, digit, and special character)\n", user_id);
        return 0;
    }

    if (has_upper && has_lower && has_digit && has_special && len >= 12) {
        printf("User %s: STRONG password\n", user_id);
    } else if (len < 10) {
        printf("User %s: WEAK password\n", user_id);
    } else {
        printf("User %s: MODERATE password\n", user_id);
    }

    return 0;
}
