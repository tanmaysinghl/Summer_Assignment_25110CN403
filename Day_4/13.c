#include<stdio.h>
int main() {
    int n,a=0,b=1,c=0;
    printf("Enter the number of terms required:");
    scanf("%d",&n);
    printf("The fibonacci series upto %d terms is:\n",n);
    printf("%d %d ",a,b);
    for(int i=1;i<=n-2;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    return 0;
}