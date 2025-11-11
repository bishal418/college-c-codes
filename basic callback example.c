#include <stdio.h>
void sayHello() {
    printf("hello, student! you just called me back!\n");
}
void studentWork(void (*callback)()) {
    printf("student is doing homework...\n");
    callback();
}
int main(){
    studentWork(sayHello);
    return 0;
}
