#include<stdio.h>
int factorial(int x){
    int fac=1;
    if(x==0) return 1;
    for(int i=1;i<=x;i++){
        fac=fac*i;
    }
    return fac;
    }

int main(){
    int a;
    printf("Enter a (positive number) to find factorial:");
    scanf("%d",&a);
    if (a<0) {
        printf("Invalid");
        return 0;}
    printf("The factorial of %d is %d",a,factorial(a));
    return 0;
}