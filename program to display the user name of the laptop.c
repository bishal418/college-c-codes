#include <stdio.h>
#include <windows.h>

int main() {
    char username[256];
    DWORD size = GetEnvironmentVariable("USERNAME", username, sizeof(username));

    if (size > 0 && size < sizeof(username)) {
        printf("Logged in user: %s\n", username);
    } else {
        printf("Failed to get username.\n");
    }

    return 0;
}
