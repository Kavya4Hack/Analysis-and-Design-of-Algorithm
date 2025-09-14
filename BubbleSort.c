#include <stdio.h>
void swap(int *arr,int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void BubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr,j,j+1);
            }
        }
    }
}
void printArray(int arr[],int n){
    for (int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
}
int main(){
    int arr[] = {5,6,1,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Sorted Array: ");
    BubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}