#include <stdio.h>
int getNumber(){
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    return num;
}
int main(){
    int number = getNumber();
    printf("you entered: %d\n", number);
}
