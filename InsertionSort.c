#include <stdio.h>

void insertionSort(int arr[], int n){           // [5,8,7,1,4,3]
    for(int i=1;i<n;++i){                       
        int key = arr[i];                       // key = 8
        int j = i - 1;                          // j = 0
        while(j>=0 && arr[j]>key){              // case 1: 0>=0 && 5>8 --> False. So, key = 8
            arr[j+1] = arr[j];                  // case 2:  key = 7 j=1 ; 1>=0 && 8>7 --> arr[2]=8 j=0
            j = j-1;
        }
        arr[j+1] = key;
    }
}
void printArray(int arr[], int n ){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[] = {12,11,13,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted Array: ");
    printArray(arr,n);
    insertionSort(arr,n);
    printf("\n");
    printf("Sorted Array: ");
    printArray(arr,n);
    return 0;
}