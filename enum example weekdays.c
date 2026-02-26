#include <stdio.h>
enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
int main() {
    enum week day;
    day = Wednesday;
    printf("the numeric value of Wednesday is %d\n", day);
    return 0;
}
