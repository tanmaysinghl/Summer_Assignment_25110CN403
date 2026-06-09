#include<stdio.h>
int maxx(int x, int y){
    if(x>y) return x;
    else return y;
}
int main(){
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("The maximum of %d and %d is %d",a,b,maxx(a,b));
    return 0;
}