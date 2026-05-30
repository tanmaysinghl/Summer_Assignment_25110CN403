#include<stdio.h>
int main() {
    int n,prd=1;
    printf("Enter the number to find product of digits:\n");
    scanf("%d",&n);
    int a=n;
    while(a>0){
        int ld=a%10;
        prd=prd*ld;
        a=a/10;
    }
    printf("The product of digits of %d is %d",n,prd);
    return 0;
}