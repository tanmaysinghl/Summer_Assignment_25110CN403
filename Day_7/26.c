#include<stdio.h>
int fibo(int x){
    if(x==1) return 0;
    else if (x==2) return 1;
    else return fibo(x-1) + fibo(x-2);
}

int main(){
    int n;
    printf("Enter the number of terms of fibonacci series:");
    scanf("%d",&n);
    printf("The %d terms of fibonacci series are:\n",n);
    for(int i=1;i<=n;i++){
        printf("%d ",fibo(i));
    }
    return 0;
}