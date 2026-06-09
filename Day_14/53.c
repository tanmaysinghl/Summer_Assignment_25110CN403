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
    int target;
    printf("Enter the element to search:");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]==target) {
            printf("The element %d found at index %d",target,i);
            return 0;}
        }
    printf("The element %d not found",target);
    return 0;


}