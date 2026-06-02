#include<stdio.h>

int chk_prm(int x){
    if(x<=1) return 0;
    for(int i=2;i<=x/2;i++){
        if(x%i==0) return 0;
    }
    return 1;
}

int main() {
    int n,lpf=0;
    printf("Enter the number to find its largest prime factor:\n");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(n%i==0){
            if(chk_prm(i)==1) lpf=i;
        }
    }
    printf("The largest prime factor of %d is %d",n,lpf);
    return 0;
}