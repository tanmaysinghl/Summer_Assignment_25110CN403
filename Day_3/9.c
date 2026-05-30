#include<stdio.h>
int main() {
    int n,count=0;
    printf("Enter the number to check if it is prime:\n");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(n%i==0) {
            count++;
            break;
        }
    }
    if(n<=1) printf("The number %d is neither prime nor composite",n);
    else if(count==0) printf("The number %d is prime",n);
    else printf("The number %d is not prime ",n );
    return 0;
}