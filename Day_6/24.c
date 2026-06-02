#include<stdio.h>
int main(){
    int x,n,res=1;
    printf("Enter the number:");
    scanf("%d",&x);
    printf("Enter the exponent:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        res=res*x;
    }
    printf("The final answer is %d",res);
    return 0;
}