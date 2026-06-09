#include<stdio.h>
void chk_prm(int x){
    if(x<=1){
        printf("The number %d is not prime",x);
        return;
    }
    for(int i=2;i<=x/2;i++){
        if(x%i==0) {
            printf("The number %d is not prime",x);
            return;
    }
    }
    printf("The number %d is prime",x);}



int main(){
    int a;
    printf("Enter the number to check if it is prime:");
    scanf("%d",&a);
    chk_prm(a);
    return 0;
}