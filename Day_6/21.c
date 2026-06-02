#include<stdio.h>
int main(){
    int n,res=0;
    printf("Enter the decimal number:");
    scanf("%d",&n);
    int a=n,m=1;
    while(a>0){
        res = res + (a%2)*m ;
        m=m*10;
        a=a/2;
    }
    printf("The binary number for %d is %d",n,res);
    return 0;
}