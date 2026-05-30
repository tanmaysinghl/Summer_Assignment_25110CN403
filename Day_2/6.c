#include<stdio.h>
int main() {
    int n,rev=0;
    printf("Enter the number to reverse:\n");
    scanf("%d",&n);
    int a=n;
    while(a>0){
        int ld=a%10;
        rev=rev*10+ld;
        a=a/10;
    }
    printf("The reverse of %d is %d",n,rev);
    return 0;
}