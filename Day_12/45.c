#include<stdio.h>
void chk_pal(int x){
    int n=x,res=0;
    while(n!=0){
        res=res*10+n%10;
        n=n/10;
    }
    if (res==x) printf("Yes, it is a pallindrome");
    else printf("No, it is not a pallindrome");
}
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    chk_pal(a);
    
    return 0;
}