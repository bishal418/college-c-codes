#include <stdio.h>
void inputarray(int *arr, int n);
void dispalyarray(int *arr, int n);
int sumarray(int *arr, int n);
int countpostive(int *arr, int n);
int countnegative(int *arr, int n);
int main(){
int arr[100];
int n, sum, pos_c, neg_c;
printf("enter the number of elements in the array: ");
scanf("%d",&n);
inpurarray(arr,n);
printf("\nArray elements are: ");
displayarray(arr,n);
sum = sumarray(arr,n);
printf("\nsum of all elements = %d",sum);
