#include<stdio.h>
int main() {
    int n;
    printf("Enter the number for which multiplication table is required:\n");
    scanf("%d",&n);
    printf("The Multiplication table of %d is:\n",n);
    for(int i=1; i<=10; i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}