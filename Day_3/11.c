#include<stdio.h>
int main(){
    int a,b,n,gcd;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    // finding smaller number 
    if(a<b) {
        n=a;}
    else{
        n=b;
    }
    //finding gcd
    for(int i=1;i<=n;i++){
        if(a%i==0 && b%i==0) gcd=i;
    }
    printf("The gcd of %d and %d is %d",a,b,gcd);
    return 0;
}