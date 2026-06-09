#include<stdio.h>
int summ(int x, int y){
    return x+y;
}
int main(){
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("The sum of %d and %d is %d",a,b,summ(a,b));
    return 0;
}