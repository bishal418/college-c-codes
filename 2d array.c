#include <stdio.h>
int main(void)
{
int m[2][3]={{1,2,3},{4,5,6}};
for (int i=0; i<2; i++){
    for (int j=0; j<3; j++){
    printf("%d",m[i][j]);
    if (j==2)
        printf("\n");
    else
        printf(" ");
    }
}
return 0;
}
