#include<stdio.h>
int rsum(int x){
    if(x<10) return x;
    else return x%10 + rsum(x/10);
}

int main(){
    int n;
    printf("Enter the number to calculate sum of digits:");
    scanf("%d",&n);
    printf("The sum of digits of %d is %d",n,rsum(n));
    return 0;
}