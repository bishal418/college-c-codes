#include <stdio.h>
int main(void)
{
int m[2][4]={{1,2,3,4},{5,6,7,8}};
for (int i=0; i<2; i++){
    for (int j=0; j<4; j++){
    printf("%d%C",m[i][j]);
    if (j==3)
        printf("\n");
    else
        printf(" ");
    }
}
return 0;
}
