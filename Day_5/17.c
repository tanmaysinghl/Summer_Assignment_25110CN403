#include<stdio.h>
int main() {
    int n,res=0;
    printf("Enter the number to check if it is a perfect no:\n");
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++){
        if(n%i==0) res=res+i;
    }
    if(res==n) printf("The number %d is a perfect number",n);
    else printf("The number %d is not a perfect number",n);
    return 0;
}