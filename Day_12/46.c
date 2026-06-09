#include<stdio.h>
#include<math.h>
void chk_astrg(int x){
    int a=x,count=0;
    while(a>0){
        count++;
        a=a/10;
    }
    int sum=0;
    a=x;
    while(a>0){
        int ld=a%10;
        sum=sum+round(pow(ld,count));
        a=a/10;
    }
    
    if (sum==x) printf("Yes, it is armstrong");
    else printf("No, it is not armstrong");
}
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    chk_astrg(a);
    
    return 0;
}