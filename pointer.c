#include <stdio.h>
int main(void){
int x = 42;
int *p = &x;
printf("%d\n",*p);
*p = 100;
printf("%d\n",x);
return 0;
}
