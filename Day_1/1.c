#include<stdio.h>
int main() {
    int n,sum=0;
    printf("Enter the number upto which sum is required:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        sum=sum+i;

    }
    printf("The sum of %d natural numbers is %d",n,sum);
    return 0;
}