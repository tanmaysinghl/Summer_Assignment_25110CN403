#include<stdio.h>
void reverse(int arr[],int i,int j){
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
}
}
int main(){
    int n;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    int k;
    printf("Enter the rotation variable:");
    scanf("%d",&k);
    k=k%n;

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
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    printf("\nThe right rotated array is: [ ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);}
        printf("]");


}