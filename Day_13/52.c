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
    int ecount=0,ocount=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0) ecount++;
        else ocount++;
        }
    printf("The no of even elements is %d \nThe no of odd elements is %d",ecount,ocount);
    return 0;


}