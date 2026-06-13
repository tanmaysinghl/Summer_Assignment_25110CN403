#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++){
        printf("Element %d:",i);
        scanf("%d",&arr[i]);
    }
    printf("The array is: [ ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);}
        printf("]");

    for(int i=0,j=n-1;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("\nThe reversed array is: [ ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);}
        printf("]");


}