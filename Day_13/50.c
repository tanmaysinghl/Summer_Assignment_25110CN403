#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int asum=0;
    for(int i=0;i<n;i++){
        asum+=arr[i];}
    int avg=asum/n;
    printf("The sum of elements in array:%d",asum);
    printf("\nThe average of elements in array:%d",avg);
    return 0;


}