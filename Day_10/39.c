#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        for(int j=i-1;j>=1;j--){
            printf("%d ",j);
        }
        nsp=nsp-1;
        printf("\n");


    }
    return 0;
}