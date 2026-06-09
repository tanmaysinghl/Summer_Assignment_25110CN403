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
    int max=arr[0],smax=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }
        if(arr[i]!=max && arr[i]>smax) smax=arr[i];
        }
    printf("The second largest element is %d",smax);
    return 0;


}