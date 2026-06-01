#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter a number to check if it is armstrong:");
    scanf("%d",&n);

    //finding no of digits
    int a=n,count=0;
    while(a>0){
        count++;
        a=a/10;
    }
    int sum=0;
    a=n;
    while(a>0){
        int ld=a%10;
        sum=sum+round(pow(ld,count));
        a=a/10;
    }
    if(sum==n) printf("The number %d is armstrong",n);
    else printf("The number %d is not armstrong",n);
    return 0;
}