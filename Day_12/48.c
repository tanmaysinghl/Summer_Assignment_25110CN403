#include<stdio.h>
void chk_prf(int x){
    int res=0;
    for(int i=1;i<=x/2;i++){
        if(x%i==0) res+=i;
    }
    if (res==x) printf("The number %d is a perfect number",x);
    else printf("The number %d is not a perfect number",x);
}
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    chk_prf(a);
    
    return 0;
}