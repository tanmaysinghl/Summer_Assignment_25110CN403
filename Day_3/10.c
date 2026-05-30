#include<stdio.h>
int main() {
    int a,b;
    printf("Enter two numbers for the range:\n");
    scanf("%d %d",&a,&b);
    printf("The prime numbers between %d and %d are:\n",a,b);
    if(a<=1) a=2;
    for(int i=a; i<=b; i++){
        int count=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0) count++;}
        if(count==0) printf("%d ",i);
    }
    return 0;
    
}