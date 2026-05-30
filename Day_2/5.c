#include<stdio.h>
int main() {
    int n,sum=0;
    printf("Enter the number to calculate the sum of digits:\n");
    scanf("%d",&n);
    int a=n;
    while(a>0){
        sum=sum+a%10;
        a=a/10;
    }
    printf("The sum of digits of %d is %d",n,sum);
    return 0;
}