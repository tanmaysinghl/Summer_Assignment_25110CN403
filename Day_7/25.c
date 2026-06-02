#include<stdio.h>
int fact(int x){
    if(x==1 || x==0) return 1;
    else return x*fact(x-1);
}

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,fact(n));
    return 0;
}