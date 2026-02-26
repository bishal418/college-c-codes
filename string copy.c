#include <stdio.h>
#include <string.h>
int main () {
     char src[] ="Welcome";
     char dest[20];
     strcpy(dest, src);
        printf("Copied string: %s\n", dest);
        return 0;
}
