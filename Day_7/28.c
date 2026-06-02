#include<stdio.h>
int rev(int x,int reversed){
    if(x==0) return reversed;
    reversed=reversed*10 + x%10;
    return rev(x/10,reversed);

}

int main(){
    int n;
    printf("Enter the number to reverse:");
    scanf("%d",&n);
    printf("The reverse of %d is %d",n,rev(n,0));
    return 0;
}