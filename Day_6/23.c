#include<stdio.h>
int main(){
    int n,res=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int a=n;
    while(a>0){
        res=res +(a%2);
        a=a/2;
    }
    printf("The number of set bits in %d is %d",n,res);
    return 0;
}