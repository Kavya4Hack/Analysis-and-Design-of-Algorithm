#include <stdio.h>
#include <time.h>

int linearSearch(int arr[], int n, int key, int*comparisons){
    for(int i=0;i<n;i++){
        (*comparisons)++;
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n, key, index, comparisons;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d",&key);
    comparisons = 0;
    clock_t start_time = clock();
    index = linearSearch(arr,n,key,&comparisons);
    clock_t end_time = clock();
    double time_taken = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    if(index != -1){
        printf("Linear Search: Number %d found at index %d\n",key,index);
    }
    else{
        printf("Linear Search: Number %d not found\n",key);
    }
    printf("Comparisons: %d, Time: %lf sec\n",comparisons, time_taken);
    return 0;
}