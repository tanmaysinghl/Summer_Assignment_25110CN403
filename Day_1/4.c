#include<stdio.h>
int main() {
    int n,count=0;
    printf("Enter the number to count the digits:\n");
    scanf("%d",&n);
    int a=n;
    while(a>0){
        count++;
        a=a/10;
    }
    printf("The number of digits in %d is %d",n,count);
    return 0;
}