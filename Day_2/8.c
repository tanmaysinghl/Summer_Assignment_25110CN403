#include<stdio.h>
int main() {
    int n,rev=0;
    printf("Enter the number to check palindrome:\n");
    scanf("%d",&n);
    int a=n;
    while(a>0){
        int ld=a%10;
        rev=rev*10+ld;
        a=a/10;
    }
    if(n==rev) printf("Yes, %d is a palindrome",n);
    else printf("No, %d is not a palindrome",n);
    return 0;
}