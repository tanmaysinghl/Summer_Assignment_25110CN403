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
    int max=arr[0],min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
        }
    printf("The largest is %d and smallest is %d",max,min);
    return 0;


}