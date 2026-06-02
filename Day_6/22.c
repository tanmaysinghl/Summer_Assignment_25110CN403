#include<stdio.h>
int main(){
    int n,res=0;
    printf("Enter the binary number:");
    scanf("%d",&n);
    int a=n,m=1;
    while(a>0){
        int ld=a%10;
        res=res+ld*m;
        m=m*2;
        a=a/10;
    }
    printf("The deimal number for %d is %d",n,res);
    return 0;
}