#include<stdio.h>
int main() {
    int n,a=0,b=1,c=0;
    printf("Enter the number of fibonacci term required:");
    scanf("%d",&n);
    for(int i=1;i<=n-2;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("The nth fibonacci term is %d ",c);
    return 0;
}