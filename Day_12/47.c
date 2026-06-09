#include<stdio.h>
void fibonacci(int x){
    int a=0,b=1,c;
    printf("The fibonacci series upto %d terms is:\n",x);
    for(int i=1;i<=x;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}
int main(){
    int a;
    printf("Enter the number of terms:");
    scanf("%d",&a);
    fibonacci(a);
    
    return 0;
}