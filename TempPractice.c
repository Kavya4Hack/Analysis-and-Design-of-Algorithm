// #include <stdio.h>

// void SelectionSort(int arr[], int n){
//     for(int i=0;i<n-1;i++){
//         int min_idx = i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[min_idx]){
//                 min_idx = j;
//             }
//         }
//         int temp = arr[i];
//         arr[i] = arr[min_idx];
//         arr[min_idx] = temp;
//     }
// }
// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int arr[] = {64,25,12,22,11};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Unsorted Array: ");
//     printArray(arr,n);
//     SelectionSort(arr,n);
//     printf("\n");
//     printf("Sorted Array: ");
//     printArray(arr,n);
//     return 0;
// }

// #include <stdio.h>

// void InsertionSort(int arr[], int n){
//     for(int i=1;i<n;++i){
//         int key = arr[i];
//         int j = i-1;
//         while(j>=0 && arr[j]>key){
//             arr[j+1] = arr[j];
//             j = j-1;
//         }
//         arr[j+1] = key;
//     }
// }
// void printArray(int arr[], int n ){
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int arr[] = {12,11,13,5,6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Unsorted Array: ");
//     printArray(arr,n);
//     InsertionSort(arr,n);
//     printf("\n");
//     printf("Sorted Array: ");
//     printArray(arr,n);
//     return 0;
// }

// #include <stdio.h>
// void swap(int *arr,int i,int j){
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }
// void BubbleSort(int arr[], int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr,j,j+1);
//             }
//         }
//     }
// }
// void printArray(int arr[], int n){
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int arr[] = {5,6,1,3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Unsorted Array: ");
//     printArray(arr,n);
//     printf("\n");
//     printf("Sorted Array: ");
//     BubbleSort(arr,n);
//     printArray(arr,n);
//     return 0;
// }
// #include <stdio.h>
// void Insertion(int arr[],int n){
//     for(int i=1;i<n;i++){
//         int key = arr[i];
//         int j = i-1;
//         while(j>=0 && arr[j]>key){
//             arr[j+1] = arr[j];
//             j = j-1;
//         }
//         arr[j+1] = key; 
//     }
// }
// int main(){
//     int arr[] = {12,11,13,5,6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Sorted Array: ");
//     Insertion(arr,n);
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// void insertion(int arr[],int n){
//     for(int i=1;i<n;i++){
//         int key = arr[i];
//         int j = i-1;
//         while(j>=0 && arr[j]>key){
//             arr[j+1] = arr[j];
//             j = j-1;
//         }
//         arr[j+1] = key;
//     }
// }
// int main(){
//     int arr[] = {12,84,51,1,62};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Sorted Array: ");
//     insertion(arr,n);
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>

// void selectionSort(int arr[], int n){
//     for(int i=0;i<n-1;i++){
//         int min_idx = i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[min_idx]){
//                 min_idx = j;
//             }
//         }
//         int temp = arr[i];
//         arr[i] = arr[min_idx];
//         arr[min_idx] = temp;
//     }
// }
// int main(){
//     int arr[] = {45,95,5,35,2,15};
//     int n =sizeof(arr) / sizeof(arr[0]);
//     printf("Sorted array: ");
//     selectionSort(arr,n);
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
// #include <stdio.h>
// void insertion(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int min_idx = i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[min_idx]){
//                 min_idx = j;
//             }
//         }
//         int temp = arr[i];
//         arr[i] = arr[min_idx];
//         arr[min_idx] = temp;
//     }
// }
// int main(){
//     int arr[] = {81,52,3,4,20,10};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Sorted Arraty: ");
//     insertion(arr,n);
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// bubbleSort
// #include <stdio.h>
// void swap(int *arr,int i, int j){
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }
// void bubbleSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j+1]<arr[j]){
//                 swap(arr,j,j+1);
//             }
//         }
//     }
// }
// int main(){
//     int arr[] = {15,52,6,4,88};
//     int n =sizeof(arr) / sizeof(arr[0]);
//     printf("Sorted Array: ");
//     bubbleSort(arr,n);
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// Bubble sort
// #include <stdio.h>
// void swap(int *arr,int i ,int j){
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }
// void bubbleSort(int arr[], int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr,j,j+1);
//             }
//         }
//     }
// }
// int main(){
//     int arr[] = {15,85,61,2,30,44,74};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Sorted array: ");
//     bubbleSort(arr,n);
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
// selection sort
// #include <stdio.h>
// void insertionSort(int arr[], int n){
//     for(int i=0;i<n-1;i++){
//         int min_idx = i;
//         // int j = i+1;
//         for(int j=1+i;j<=n-1;j++){
//             if(arr[j]<arr[min_idx]){
//                 min_idx = j;
//             }
//         }
//                 int temp = arr[i];
//                 arr[i] = arr[min_idx];
//                 arr[min_idx] = temp;
//     }
// }
// void printArry(int arr[], int n){
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int arr[] = {15,85,30,2,89,44,1,26};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Unsorted Array: ");
//     printArry(arr,n);
//     printf("\n");
//     printf("Sorted Array: ");
//     insertionSort(arr,n);
//     printArry(arr,n);
//     return 0;
// }

// Insertion sort
// #include <stdio.h>
// void insertion(int arr[],int n){
//     for(int i=1;i<n;i++){
//         int key = arr[i];
//         int j = i-1;
//         while(arr[j]>key && j>=0){
//             arr[j+1] = arr[j];
//             j = j-1;
//         }
//         arr[j+1] = key;
//     }
// }
// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int arr[] = {12,5,8,14,55,1};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Unsorted Array: ");
//     printArray(arr,n);
//     printf("\n");
//     printf("Sorted Array: ");
//     insertion(arr,n);
//     printArray(arr,n);
//     return 0;
// }

// Bubble sort
// #include <stdio.h>
// void swap(int *arr, int i, int j){
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }
// void bubbleSort(int arr[], int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr,j,j+1);
//             }
//         }
//     }
// }
// void printArray(int arr[], int n){
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int arr[] = {12,55,17,2,35,10};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Unsorted Array: ");
//     printArray(arr,n);
//     printf("\n");
//     printf("Sorted Array: ");
//     bubbleSort(arr,n);
//     printArray(arr,n);
//     return 0;
// }

// Insertion Sort
// #include <stdio.h>
// void insertion(int arr[], int n){
//     for(int i=1;i<n;i++){
//         int key = arr[i];
//         int j =i-1;
//         while(arr[j]>key && j>=0){
//             arr[j+1] = arr[j];
//             j = j - 1;
//         }
//         arr[j+1] = key;
//     }
// }
// void printArray(int arr[], int n){
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int arr[] = {15,48,50,1,26,9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Unsorted Array: ");
//     printArray(arr,n);
//     printf("\n");
//     printf("Sorted Array: ");
//     insertion(arr,n);
//     printArray(arr,n);
//     return 0;
// }

// Selection Sort
// #include <stdio.h>
// void selection(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int min_idx = i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[min_idx]){
//                 min_idx = j;
//             }
//         }
//         int temp = arr[i];
//         arr[i] = arr[min_idx];
//         arr[min_idx] = temp;
//     }
// }
// void printArray(int arr[], int n){
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int arr[] = {15,48,50,1,26,9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Unsorted Array: ");
//     printArray(arr,n);
//     printf("\n");
//     printf("Sorted Array: ");
//     selection(arr,n);
//     printArray(arr,n);
//     return 0;
// }

// Quick sort
// #include <stdio.h>
// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int partition(int arr[], int low, int high){
//     int pivot = arr[high];
//     int i = low - 1;
//     for(int j=low;j<high;j++){
//         if(arr[j]<=pivot){
//             i++;
//             swap(&arr[i],&arr[j]);
//         }
//     }
//     swap(&arr[i+1],&arr[high]);
//     return i+1;
// }
// void quickSort(int arr[], int low, int high){
//     if(low<high){
//     int pi= partition(arr,low,high);
//     quickSort(arr, low,pi-1);
//     quickSort(arr,pi+1,high);
//     }
// }
// void printArray(int arr[], int n){
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int arr[] = {10, 7, 8, 9, 1, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     printf("Unsorted array: ");
//     printArray(arr, n);
//     printf("\n");
    
//     printf("Sorted array:   ");
//     quickSort(arr, 0, n - 1);
//     printArray(arr, n);
//     return 0;
// }
// #include <stdio.h>
// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int partition(int arr[], int low, int high){
//     int pivot = arr[high];
//     int i = low - 1;
//     for(int j=low;j<high;j++){
//         if(arr[j]<=pivot){
//             i++;
//             swap(&arr[i], &arr[j]);
//         }
//     }
//     swap(&arr[i+1], &arr[high]);
//     return i+1;
// }
// void quickSort(int arr[], int low, int high){
//     if(low<high){
//         int pi = partition(arr, low,high);
//         quickSort(arr,low,pi-1);
//         quickSort(arr,pi+1,high);
//     }
// }
// void printArr(int arr[], int n ){
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int arr[] = {15,20,5,33,78,8,12};
//     int n =sizeof(arr) / sizeof(arr[0]);
//     printf("Unsorted Array: ");
//     printArr(arr,n);
//     printf("\n");
//     printf("Sorted Array: ");
//     quickSort(arr,0,n-1);
//     printArr(arr,n);
//     return 0;
// }

// #include <stdio.h>
// #define MAX 100
// int adj[MAX][MAX];
// int visited[MAX];
// int queue[MAX],front = -1, rear = -1;

// void enqueue(int v){
//     if(rear == MAX-1)
//         return;
//     if(front == -1)
//         front = 0;
//     queue[++rear] = v;
// }
// int dequeue(){
//     if(front==-1 || front>rear){
//         return -1;
//     }
//     return queue[front++];
// }
// void BFS(int start, int n){
//     for(int i=0;i<n;i++){
//         visited[i] = 0;
//     }
//     enqueue(start);
//     visited[start] = 1;
//     printf("BFS Traversal: ");

// }
// int main(){
    
//     return 0;
// }

// insertion sort
// #include <stdio.h>
// void insertion(int arr[], int n){
//     for(int i=1;i<n;i++){
//         int key = arr[i];
//         int j = i - 1;
//         while(arr[j]>key && j>=0){
//             arr[j+1] = arr[j];
//             j = j - 1;
//         }
//         arr[j+1] = key;
//     }
// }
// int main(){
    
//     return 0;
// }
// Selection sort
// #include <stdio.h>
// void selection(int arr[], int n){
//     for(int i=0;i<n-1;i++){
//         int min_idx=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[min_idx]>arr[j]){
//                 min_idx = j;
//             }
//         }
//         int temp = arr[i];
//         arr[i] = arr[min_idx];
//         arr[min_idx] = temp;
//     }
// }
// int main(){
    
//     return 0;
// }
// Bubble Sort
// #include <stdio.h>
// void swap(int *arr, int i, int j){
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }
// void bubble(int arr[], int n){
//     for( int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr,j,j+1);
//             }
//         }
//     }
// }
// int main(){
    
//     return 0;
// }
// Quick Sort
// #include <stdio.h>
// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int partition(int arr[],int low, int high){
//     int pivot = arr[high];
//     int i = low - 1;
//     for(int j=low;j<high;j++){
//         if(arr[j]<=pivot){
//             i++;
//             swap(&arr[i],&arr[j]);
//         }
//     }
//     swap(&arr[i+1],&arr[high]);
//     return i+1;
// }
// void quickSort(int arr[], int low, int high){
//     if(low<high){
//         int pi = partition(arr, low, high);
//         quickSort(arr, low,pi-1);
//         quickSort(arr,pi+1,high);
//     }
// }
// int main(){
    
//     return 0;
// }
// Insertoin sort
// #include <stdio.h>
// void insertion(int arr[], int n){
//     for(int i=1;i<n;i++){
//         int key = arr[i];
//         int j = i -1;
//         while(arr[j]>key && j>=0){
//             arr[j+1] = arr[j];
//             j = j-1;
//         }
//         arr[j+1] = key;
//     }
// }
// int main(){
    
//     return 0;
// }
// Selection Sort
// #include <stdio.h>
// void selection(int arr[], int n){
//     for(int i=0;i<n-1;i++){
//         int min_idx = i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[min_idx]){
//             min_idx = j;
//             }
//         }
//         int temp = arr[i];
//         arr[i] = arr[min_idx];
//         arr[min_idx] = temp;
//     }
// }
// void printArray(int arr[], int n){
//     for(int i =0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
    
//     return 0;
// }

// Bubble Sort
// #include <stdio.h>
// void swap(int *arr, int i, int j){
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }
// void bubbleSort(int arr[], int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr,j,j+1);
//             }
//         }
//     }
// }
// int main(){
    
//     return 0;
// }

// Quick sort
// #include <stdio.h>
// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int partition(int arr[], int low, int high){
//     int pivot = arr[high];
//     int i = low-1;
//     for(int j=low;j<high;j++){
//         if(arr[j]<=pivot){
//             i++;
//             swap(&arr[i],&arr[j]);
//         }
//     }
//     swap(&arr[i+1],&arr[high]);
//     return i+1;
// }
// void quickSort(int arr[],int low,int high){
//     if(low<high){
//         int pi = partition(arr,low,high);
//         quickSort(arr,low,pi-1);
//         quickSort(arr,pi+1,high);
//     }
// }
// int main(){
    
//     return 0;
// }
// Factorial iterative
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(){
//     double ctime;
//     clock_t start, end;
//     start = clock();
    
//     int n, i;
//     printf("Enter a number for Factorial: ");
//     scanf("%d",&n);
//     int fact = 1;
//     for(int i=1;i<=n;i++){
//         fact = fact * i;
//     }
//     printf("The factorial is %d\n",fact);
//     end = clock();
//     ctime = (double)(end-start) / CLOCKS_PER_SEC;
//     printf("Output returns in %f seconds.",ctime);
//     return 0;
// }
// #include <stdio.h>
// #include <time.h>

// int main(){
//     double ctime;
//     clock_t start, end;
//     start = clock();

//     int n, i;
//     printf("Enter a number for factorial: ");
//     scanf("%d",&n);

//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact = fact * i;
//     }
//     printf("The factorial is %d\n",fact);
//     end = clock();
//     ctime = (double)(end-start) / CLOCKS_PER_SEC;
//     printf("Output returs in %f seconds.",ctime);
//     return 0;
// }
// Factorial recursion
// #include <stdio.h>
// #include <time.h>

// int factorial(int n){
//     if(n>0){
//         return n*factorial(n-1);
//     }
//     else{
//         return 1;
//     }
// }
// int main(){
//     int a;
//     double ctime;
//     clock_t start, end;
//     int n;

//     printf("Enter a number for factorial: ");
//     scanf("%d",&n);

//     start = clock();
//     a = factorial(n);
//     end = clock();
//     printf("The factorial is %d\n",a);
//     ctime = (double)(end-start)/CLOCKS_PER_SEC;
//     printf("The time for the factorial is %f seconds.",ctime);
//     return 0;
// }
// Quick sort
// #include <stdio.h>
// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int partition(int arr[], int low, int high){
//     int pivot = arr[high];
//     int i = low-1;
//     for(int j=low;j<high;j++){
//         if(arr[j]<=pivot){
//             i++;
//             swap(&arr[i], &arr[j]);
//         }
//     }
//     swap(&arr[i+1], &arr[high]);
//     return i+1;
// }
// void quickSort(int arr[], int low, int high){
//     if(low<high){
//     int pi = partition(arr,low,high);
//     quickSort(arr,low,pi-1);
//     quickSort(arr,pi+1,high);
//     }
// }
// void printArray(int arr[], int n){
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int arr[] = {15,85,2,45,30,25,10};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Unsorted array: ");
//     printArray(arr,n);
//     printf("\n");
//     printf("Sorted array: ");
//     quickSort(arr, 0,n-1);
//     printArray(arr,n);
//     return 0;
// }
// Merge Sort
// #include <stdio.h>
// void merge(int left[], int right[], int merged[], int nleft, int nright){
//     int i=0,j=0,k=0;
//     while(i < nleft && j < nright){
//         if(left[i] <= right[j]){
//             merged[k++] = left[i++];
//         }else{
//             merged[k++] = right[j++];
//         }
//     }
//     while(i < nleft){
//         merged[k++] = left[i++];
//     }
//     while(j < nright){
//         merged[k++] = right[j++];
//     }
// }
// int main(){
//     int left[] = {1,3,5,7};
//     int right[] = {2,4,6,8,10};
//     int merged[9];

//     int nleft = sizeof(left) / sizeof(left[0]);
//     int nright = sizeof(right) / sizeof(right[0]);

//     printf("Left Array: ");
//     for(int i=0;i<nleft;i++){
//         printf("%d ",left[i]);
//     }
//     printf("\nRight Array: ");
//     for(int i=0;i<nright;i++){
//         printf("%d ",right[i]);
//     }
//     printf("\n");
//     merge(left,right,merged,nleft,nright);
//     printf("Merged Array: ");
//     for(int i=0;i< nleft + nright;i++){
//         printf("%d ",merged[i]);
//     }
//     return 0;
// }
// Bubble sort
// #include <stdio.h>
// void swap(int *arr, int i, int j){
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }
// void bubbleSort(int arr[], int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr,j,j+1);
//             }
//         }
//     }
// }
// void printArray(int arr[], int n){
//     for(int i=0;i<n;i++){
//         printf("%d ", arr[i]);
//     }
// }
// int main(){
//     int arr[] = {15,21,47,55,1,20,33,5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Unsorted array: ");
//     printArray(arr,n);
//     printf("\n");
//     printf("Sorted array: ");
//     bubbleSort(arr,n);
//     printArray(arr,n);
//     return 0;
// }
// insertion sort
// #include <stdio.h>
// void insertion(int arr[], int n){
//     for(int i=1;i<n;i++){
//         int key = arr[i];
//         int j = i - 1;
//         while(j>=0 && arr[j]>key){
//             arr[j+1] = arr[j];
//             j = j - 1;
//         }
//         arr[j+1] = key;
//     }
// }
// void printArray(int arr[], int n){
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int arr[] = {15,21,47,55,1,20,33,5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Unsorted array: ");
//     printArray(arr,n);
//     printf("Sorted array: ");
//     insertion(arr,n);
//     printArray(arr,n);
//     return 0;
// }

// #include <stdio.h>
// void merge(int left[], int right[], int merged[], int nleft, int nright){
//     int i=0,j=0,k=0;
//     while(i<nleft && j<nright){
//         if(left[i]<=right[j]){
//             merged[k++] = left[i++];
//         }else{
//             merged[k++] = right[j++];
//         }
//     }
//     while(i<nleft){
//         merged[k++] = left[i++];
//     }
//     while(j<nright){
//         merged[k++] = right[j++];
//     }
// }
// int main(){
//     int left[] = {1,3,5,7};
//     int right[] = {2,4,6,8,10};
//     int merged[9];

//     int nleft = sizeof(left) / sizeof(left[0]);
//     int nright = sizeof(right) / sizeof(right[0]);

//     printf("Left Array: ");
//     for(int i=0;i<nleft;i++){
//         printf("%d ",left[i]);
//     }
//     printf("\nRight Array: ");
//     for(int i=0;i<nright;i++){
//         printf("%d ",right[i]);
//     }
//     printf("\n");
//     merge(left,right,merged,nleft,nright);
//     printf("Merger Array:");
//     for(int i=0;i<nleft+nright;i++){
//         printf("%d ", merged[i]);
//     }
//     return 0;
// }

// Factorial iterative
// #include <stdio.h>
// #include <time.h>

// int main(){
//     double ctime;
//     clock_t start, end;
//     int n;
//     printf("Enter a number for factorial: ");
//     scanf("%d",&n);
//     start = clock();
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact = fact * i;
//     }
//     printf("The factorial is %d\n",fact);
//     end = clock();
//     ctime = (double)(end-start) / CLOCKS_PER_SEC;
//     printf("Output returned in %f seconds.",ctime);
//     return 0;
// }
// Factorail recursive
// #include <stdio.h>
// #include <time.h>
// int factorial(int n){
//     if(n>0){
//         return n*factorial(n-1);
//     }else{
//         return 1;
//     }
// }
// int main(){
//     double ctime;
//     clock_t start, end;
//     int n;
//     printf("Enter a number for factorial: ");
//     scanf("%d",&n);
//     start = clock();
//     int a = factorial(n);
//     end = clock();
//     ctime = (double)(end-start) / CLOCKS_PER_SEC;
//     printf("Output return in %f seconds.",ctime);
//     return 0;
// }
// merge sort
// #include <stdio.h>
// void merge(int left[], int right[], int merged[], int nleft, int nright){
//     int i=0,j=0,k=0;
//     while(i<nleft && j<nright){
//         if(left[i] <= right[j]){
//             merged[k++] = left[i++];
//         }else{
//             merged[k++] = right[j++];
//         }
//     }
//     while(i<nleft){
//         merged[k++] = left[i++];
//     }
//     while(j<nright){
//         merged[k++] = right[j++];
//     }
// }
// int main(){
//     int left[] = {1,3,5,7,9};
//     int right[] = {2,4,6,8,10};
//     int merged[10];

//     int nleft = sizeof(left) / sizeof(left[0]);
//     int nright = sizeof(right) / sizeof(right[0]);

//     printf("Left Array: ");
//     for(int i=0;i<nleft;i++){
//         printf("%d ",left[i]);
//     }
//     printf("\nRight Array: ");
//     for(int i=0;i<nright;i++){
//         printf("%d ", right[i]);
//     }
//     printf("\n");
//     merge(left,right,merged,nleft, nright);
//     printf("Merged Array: ");
//     for(int i=0;i<nleft+nright;i++){
//         printf("%d ",merged[i]);
//     }
//     return 0;
// }

// Factorial
// #include <stdio.h>
// #include <time.h>

// int main(){
//     double ctime;
//     clock_t start, end;
//     int n;
//     start = clock();
//     printf("Enter a number for factorial: ");
//     scanf("%d",&n);
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact = fact * i;
//     }
//     printf("The factorail is %d\n",fact);
//     end = clock();
//     ctime = (double)(end-start) / CLOCKS_PER_SEC;
//     printf("Output returns in %f seconds.",ctime);
//     return 0;
// }

// #include <stdio.h>
// #include <time.h>
// int factorial(int n){
//     if(n>1){
//         return n*factorial(n-1);
//     }else{
//         return 1;
//     }
// }
// int main(){
//     int n;
//     double ctime;
//     clock_t start, end;
//     printf("Enter a number for factorial: ");
//     scanf("%d",&n);
//     start = clock();
//     int a = factorial(n);
//     end = clock();
//     printf("The factorial is %d.\n",a);
//     ctime = (double)(end-start)/CLOCKS_PER_SEC;
//     printf("Output returns in %f seconds.",ctime);
//     return 0;
// }
// quic sort
// #include <stdio.h>
// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int partition(int arr[], int low, int high){
//     int pivot = arr[high];
//     int i = low-1;
//     for(int j=low;j<high;j++){
//         if(arr[j]<=pivot){
//             i++;
//             swap(&arr[i], &arr[j]);
//         }
//     }
//     swap(&arr[i+1],&arr[high]);
//     return i+1;
// }
// void quickSort(int arr[],int low, int high){
//     int pi = partition(arr,low,high);
//     quickSort(arr,low,pi-1);
//     quickSort(arr,pi+1,high);
// }
// void printArray(int arr[], int size){
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int arr[] = {10, 7, 8, 9, 1, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     printf("Unsorted array: ");
//     printArray(arr, n);

//     quickSort(arr, 0, n - 1);

//     printf("Sorted array:   ");
//     printArray(arr, n);
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int arr[256];
// int binarysearch(int n, int num){
//     int left=0, right = n-1;
//     int no_of_comparisons = 0;
//     while(left<=right){
//         no_of_comparisons++;
//         int mid = (left+right)/2;
//         if(arr[mid] == num){
//             printf("")
//         }
//     }
// }

// int main(){
    
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int arr[256];

// int linearSearch(int n, int num) {
//     int no_of_Comparison = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == num) {
//             printf("In Linear Search: Number %d found at index %d\n", num, i);
//             return no_of_Comparison;
//         }
//         no_of_Comparison++;
//     }
//     printf("Number %d not found in the array.\n", num);
//     return no_of_Comparison;
// }

// int binarySearch(int n, int num) {
//     int left = 0, right = n - 1;
//     int no_of_Comparison = 0;
//     while (left <= right) {
//         no_of_Comparison++;
//         int mid = (left + right) / 2;
//         if (arr[mid] == num) {
//             printf("In Binary Search: Number %d found at index %d\n", num, mid);
//             return no_of_Comparison;
//         }
//         else if (arr[mid] < num) {
//         }
//         else {
//             right = mid - 1;
//         }
//     }
//     printf("Number %d not found in the array.\n", num);
//     return no_of_Comparison;
// }

// int generateArray(int size) {
//     for (int i = 0; i < size; i++) {
//         arr[i] = i + 1;
//     }
// }

// void benchmark(int size) {
//     clock_t start, end;
//     double time_taken;

//     printf("\n--- LINEAR SEARCH ---\n");

//     // Best Case (First element)
//     start = clock();
//     int linearBest = linearSearch(size, arr[0]);
//     end = clock();
//     time_taken = (double)(end - start) / CLOCKS_PER_SEC;
//     printf("Best Case: Comparisons = %d, Time = %.6f sec\n", linearBest, time_taken);

//     // Worst Case (Not present)
//     start = clock();
//     int linearWorst = linearSearch(size, -1);
//     end = clock();
//     time_taken = (double)(end - start) / CLOCKS_PER_SEC;
//     printf("Worst Case: Comparisons = %d, Time = %.6f sec\n", linearWorst, time_taken);

//     // Average Case (Middle element)
//     start = clock();
//     int linearAvg = linearSearch(size, arr[size / 2]);
//     end = clock();
//     time_taken = (double)(end - start) / CLOCKS_PER_SEC;
//     printf("Average Case: Comparisons = %d, Time = %.6f sec\n", linearAvg, time_taken);

//     printf("\n--- BINARY SEARCH ---\n");

//     // Best Case (Middle)
//     start = clock();
//     int binaryBest = binarySearch(size, arr[size / 2]);
//     end = clock();
//     time_taken = (double)(end - start) / CLOCKS_PER_SEC;
//     printf("Best Case: Comparisons = %d, Time = %.6f sec\n", binaryBest, time_taken);

//     // Worst Case (Not present)
//     start = clock();
//     int binaryWorst = binarySearch(size, -1);
//     end = clock();
//     time_taken = (double)(end - start) / CLOCKS_PER_SEC;
//     printf("Worst Case: Comparisons = %d, Time = %.6f sec\n", binaryWorst, time_taken);

//     // Average Case (Random middle element)
//     start = clock();
//     int binaryAvg = binarySearch(size, arr[size / 4]); // Element at 25% index
//     end = clock();
//     time_taken = (double)(end - start) / CLOCKS_PER_SEC;
//     printf("Average Case: Comparisons = %d, Time = %.6f sec\n", binaryAvg, time_taken);
// }

// int main() {
//     int size;
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     if (size > 256) {
//         printf("Size exceeds maximum limit of 256. Setting size to 256.\n");
//         size = 256;
//     }

//     generateArray(size);
//     benchmark(size);

//     return 0;
// }
// Linear search
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int arr[256];

// int linearSearch(int n, int num){
//     int no_of_comparison = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i] == num){
//             printf("In Linear search: Number %d found at index %d\n",num,i);
//             return no_of_comparison;
//         }
//         no_of_comparison++;
//     }
//     printf("Number %d not found in the array.\n",num);
//     return no_of_comparison;
// }
// int generatArray(int size){
//     for(int i=0;i<size;i++){
//         arr[i] = i+1;
//     }
// }
// void benchmark(int size){
//     clock_t start, end;
//     double ctime;

//     printf("\n---LinearSearch---\n");

//     start = clock();
//     int linearBest = linearSearch(size,arr[0]);
//     end = clock();
//     ctime = (double)(end-start) / CLOCKS_PER_SEC;
//     printf("Best Case: Comparison = %d, Time = %.6f sec",linearBest,ctime);

//     start = clock();
//     int linearworst = linearSearch(size,-1);
//     end = clock();
//     ctime = (double)(end-start) / CLOCKS_PER_SEC;
//     printf("Best Case: Comparison = %d, Time = %.6f sec",linearworst,ctime);
    
//     start = clock();
//     int linearAvg = linearSearch(size,arr[size/2]);
//     end = clock();
//     ctime = (double)(end-start) / CLOCKS_PER_SEC;
//     printf("Best Case: Comparison = %d, Time = %.6f sec",linearAvg,ctime);

// }
// int main(){
//     int size;
//     printf("Enter the size of the array: ");
//     scanf("%d",&size);
//     if(size > 256){
//         printf("Size ecedds 256 ");
//         size = 256;
//     }
//     generatArray(size);
//     benchmark(size);
//     return 0;
// }

// Linear search
// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>
// int arr[256];

// int linearSearch(int n ,int num){
//     int no_of_comparison = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i] == num){
//             printf("In linear search: Number %d is at index %d\n",num,i);
//             return no_of_comparison;
//         }
//         no_of_comparison++;
//     }
//     printf("Number %d did not found\n",num);
//     return no_of_comparison;
// }
// int generateArray(int size){
//     for(int i=0;i<size;i++){
//         arr[i] = i+1;
//     }
// }

// void benchmark(int size){
//     double ctime;
//     clock_t start, end;
//     printf("\nLinear search\n");
//     start = clock();
//     int linearBest = linearSearch(size,arr[0]);
//     end = clock();
//     ctime = (double)(end-start) / CLOCKS_PER_SEC;
//     printf("Best case: Comparision = %d, Time = %.6f se\n",linearBest,ctime);

//     start = clock();
//     int linearWorst = linearSearch(size,-1);
//     end = clock();
//     ctime = (double)(end-start) / CLOCKS_PER_SEC;
//     printf("Worst case: Comparision = %d, Time = %.6f se\n",linearWorst,ctime);

//     start = clock();
//     int linearAvg = linearSearch(size,arr[size/2]);
//     end = clock();
//     ctime = (double)(end-start) / CLOCKS_PER_SEC;
//     printf("Avg case: Comparision = %d, Time = %.6f se\n",linearAvg,ctime);
// }
// int main(){
//     int size;
//     printf("Enter the size of array: ");
//     scanf("%d",&size);
//     generateArray(size);
//     benchmark(size);
//     return 0;
// }
// Binary Search
// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>
// int arr[256];

// int binarySearch(int n, int num){
//     int left=0, right=n-1;
//     int no_of_comparison = 0;

//     while(left <= right){
//         no_of_comparison++;
//         int mid = (left+right) / 2;
//         if(arr[mid] == num){
//             printf("In binary search: Number %d found at index %d\n",num,mid);
//             return no_of_comparison;
//         }
//         else if(arr[mid] < num){
//             left = mid+1;
//         }
//         else{
//             right = mid -1;
//         }
//     }
//     printf("Number %d not found\n",num);
//     return no_of_comparison;
// }
// void generateArray(int size){
//     for(int i=0;i<size;i++){
//         arr[i] = i+1;
//     }
// }
// void benchmark(int size){
//     clock_t start, end;
//     double ctime;

//     printf("\nBinary Search\n");
//     start = clock();
//     int binaryBest = binarySearch(size,arr[size/2]);
//     end = clock();
//     ctime = (double)(end-start)/CLOCKS_PER_SEC;
//     printf("Best case: Comparison = %d Time taken = %.6f\n",binaryBest,ctime);

//     start = clock();
//     int binaryWorst = binarySearch(size,-1);
//     end = clock();
//     ctime = (double)(end-start)/CLOCKS_PER_SEC;
//     printf("Worst case: Comparison = %d Time taken = %.6f\n",binaryWorst,ctime);

//     start = clock();
//     int binaryAvg = binarySearch(size,arr[size/4]);
//     end = clock();
//     ctime = (double)(end-start)/CLOCKS_PER_SEC;
//     printf("Avg case: Comparison = %d Time taken = %.6f\n",binaryAvg,ctime);

// }
// int main(){
//     int size;
//     printf("Enter the size of the array: ");
//     scanf("%d",&size);
//     generateArray(size);
//     benchmark(size);
//     return 0;
// }

// Bubble sort
// #include <stdio.h>
// void swap(int *arr, int i, int j){
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }
// void bubbleSort(int arr[], int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr,j,j+1);
//             }
//         }
//     }
// }
// void printArray(int arr[], int n){
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int arr[] = {15,22,40,1,2,3,55};
//     int n= sizeof(arr) / sizeof(arr[0]);
//     printf("Unsorted Array: ");
//     printArray(arr,n);
//     printf("\n");
//     printf("Sorted Array: ");
//     bubbleSort(arr,n);
//     printArray(arr,n);
//     return 0;
// }
// insertion sort
// #include <stdio.h>
// void insertion(int arr[], int n){
//     for(int i=1;i<n;i++){
//         int key = arr[i];
//         int j = i-1;
//         while(arr[j]>key && j>=0){
//             arr[j+1] = arr[j];
//             j = j-1;
//         }
//         arr[j+1] = key;
//     }
// }
// void printArray(int arr[], int n){
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int arr[] = {15,22,40,1,2,3,55};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Unsorted Array: ");
//     printArray(arr,n);
//     printf("\n");
//     printf("Sorted Array: ");
//     insertion(arr, n);
//     printArray(arr,n);
//     return 0;
// }

// Selection sort
// #include <stdio.h>
// void selection(int arr[], int n){
//     for(int i=0;i<n-1;i++){
//         int min_idx = i;
//         for(int j = i+1;j<n;j++){
//             if(arr[j] < arr[min_idx]){
//                 min_idx = j;
//             }
//         }
//         int temp = arr[i];
//         arr[i] = arr[min_idx];
//         arr[min_idx] = temp;
//     }
// }
// void printArray(int arr[], int n){
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int arr[] = {15,22,40,1,2,3,55};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Unsorted Array: ");
//     printArray(arr,n);
//     printf("\n");
//     printf("Sorted Array: ");
//     selection(arr, n);
//     printArray(arr,n);
//     return 0;
// }

// Merge sort
// #include <stdio.h>
// void merge(int left[], int right[], int merged[], int nleft, int nright){
//     int i=0,j=0,k=0;
//     while(i<nleft && j<nright){
//         if(left[i] <= right[j]){
//             merged[k++] = left[i++];
//         }else{
//             merged[k++] = right[j++];
//         }
//     }
//     while(i<nleft){
//         merged[k++] = left[i++];
//     }
//     while(j<nright){
//         merged[k++] = right[j++];
//     }
// }
// int main(){
//     int left[] = {1,3,5,7};
//     int right[] = {2,4,6,8,10};
//     int merged[9];

//     int nleft = sizeof(left) / sizeof(left[0]);
//     int nright = sizeof(right) / sizeof(right[0]);

//     printf("\nLeft Array: ");
//     for(int i=0;i<nleft;i++){
//         printf("%d ",left[i]);
//     }
//     printf("\nRight Array: ");
//     for(int i=0;i<nright;i++){
//         printf("%d ",right[i]);
//     }
//     merge(left,right,merged,nleft,nright);
//     printf("\nMerged Array: ");
//     for(int i=0;i<nleft+nright;i++){
//         printf("%d ",merged[i]);
//     }
//     return 0;
// }
// linear search
// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>
// int arr[256];

// int linearSearch(int n, int num){
//     int no_of_comparison = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i] == num){
//             printf("In Linear search: Number %d found at index %d\n",num,i);
//             return no_of_comparison;
//         }
//     }
//     printf("Number %d not found in the array.",num);
// }
// void generateArray(int size){
//     for(int i=0;i<size;i++){
//         arr[i] = i + 1;
//     }
// }
// void benchmark(int size){
//     double ctime;
//     clock_t start, end;
//     start = clock();
//     int linesarBest = linearSearch(size,arr[0]);
//     end = clock();
//     ctime = (double)(end-start) / CLOCKS_PER_SEC;
//     printf("Best Case: Comparision = %d, Time = %.6f sec\n",linesarBest,ctime);

//     start = clock();
//     int linesarWorst = linearSearch(size,-1);
//     end = clock();
//     ctime = (double)(end-start) / CLOCKS_PER_SEC;
//     printf("Worst Case: Comparision = %d, Time = %.6f sec\n",linesarWorst,ctime);

//     start = clock();
//     int linesarAvg = linearSearch(size,arr[size/2]);
//     end = clock();
//     ctime = (double)(end-start) / CLOCKS_PER_SEC;
//     printf("Avg Case: Comparision = %d, Time = %.6f sec\n",linesarAvg,ctime);

// }
// int main(){
//     int size;
//     printf("Enter the size of array: ");
//     scanf("%d",&size);
//     generateArray(size);
//     benchmark(size);   
//     return 0;
// }
// Binary Search
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int arr[256];

// int binarySearch(int n, int num){

// }

// int main(){
    
//     return 0;
// }
// DFs
// #include <stdio.h>
// #define MAX 100

// int adjMatrix[MAX][MAX];
// int visited[MAX];

// void DFS(int node,int vertices){
//     visited[node] = 1;
//     printf("%d ",node);
//     for(int i=0;i<vertices;i++){
//         if(adjMatrix[node][i]==1 && !visited[i]){
//             DFS(i, vertices);
//         }
//     }
// }
// int main(){
//     int vertices, edges, u,v, start=0;
//     printf("Enter the number of vertices: ");
//     scanf("%d",&vertices);

//     printf("Enter the number of edges: ");
//     scanf("%d",&edges);

//     for(int i=0;i<vertices;i++){
//         for(int j=0;j<vertices;j++){
//             adjMatrix[i][j] = 0;
//         }
//     }
//     printf("Enter the edges (u v): \n");
//     for(int i=0;i<edges;i++){
//         scanf("%d %d",&u, &v);
//         adjMatrix[u][v] = 1;
//         adjMatrix[v][u] = 1;
//     }
//     for(int i=0;i<vertices;i++){
//         visited[i] = 0;
//     }
//     printf("DFS Traversal: ");
//     DFS(start, vertices);
//     return 0;
// }
// Linear search
// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>
// int arr[256];

// int linearSearch(int n, int num){
//     int no_of_comparison = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i] == num){
//             printf("In leinear search: Number %d found at index %d\n",num,i);
//             return no_of_comparison;
//         }
//         no_of_comparison++;
//     }
//     printf("No %d did not found in the aray\n",num);
//     return no_of_comparison;
// }
// void generateArray(int size){
//     for(int i=0;i<size;i++){
//         arr[i] = i + 1;
//     }
// }
// void benchmark(int size){
//     double ctime;
//     clock_t start, end;
//     start = clock();
//     int linearBest = linearSearch(size,arr[0]);
//     end = clock();
//     ctime = (double)(end-start) / CLOCKS_PER_SEC;
//     printf("Best case: Comparision=%d and time= %.6f",linearBest,ctime);

//     start = clock();
//     int linearWorst = linearSearch(size,-1);
//     end = clock();
//     ctime = (double)(end-start) / CLOCKS_PER_SEC;
//     printf("Worst case: Comparision=%d and time= %.6f",linearWorst,ctime);

//     start = clock();
//     int linearAvg = linearSearch(size,arr[size/2]);
//     end = clock();
//     ctime = (double)(end-start) / CLOCKS_PER_SEC;
//     printf("Avg case: Comparision=%d and time= %.6f",linearAvg,ctime);
// }

// int main(){
//     int size;
//     printf("Enter the size of array: ");
//     scanf("%d",&size);
//     generateArray(size);
//     benchmark(size);

//     return 0;
// }

// binary search
// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>
// int arr[256];

// int binarySearch(int n, int num){
//     int left=0, right=n-1;
//     int no_of_comparison = 0;
//     while(left <= right){
//         no_of_comparison++;
//         int mid = (left+right)/2;
//         if(arr[mid] == num){
//             printf("In binary search: Number %d found at index %d\n",num,mid);
//             return no_of_comparison;
//         }
//         else if(arr[mid] < num){
//             left = mid + 1;
//         }else{
//             right = mid-1;
//         }
//     }
//     printf("Number %d not found in the array.",num);
//     return no_of_comparison;
// }
// void generateArray(int size){
//     for(int i=0;i<size;i++){
//         arr[i] = i + 1;
//     }
// }
// void benchmark(int size){
//     double ctime;
//     clock_t start, end;

//     start = clock();
//     int binaryBest = binarySearch(size,arr[size/2]);
//     end = clock();
//     ctime = (double)(end-start) / CLOCKS_PER_SEC;
//     printf("Best case : Comparison=%d time= %.5f\n",binaryBest,ctime);

//     start = clock();
//     int binaryWorst = binarySearch(size,-1);
//     end = clock();
//     ctime = (double)(end-start) / CLOCKS_PER_SEC;
//     printf("Worst case : Comparison=%d time= %.5f\n",binaryWorst,ctime);

//     start = clock();
//     int binaryAvg = binarySearch(size,arr[size/4]);
//     end = clock();
//     ctime = (double)(end-start) / CLOCKS_PER_SEC;
//     printf("Avg case : Comparison=%d time= %.5f\n",binaryAvg,ctime);

// }
// int main(){
//     int size;
//     printf("Enter the size of array: ");
//     scanf("%d", &size);
//     generateArray(size);
//     benchmark(size);
//     return 0;
// }
// DFS
// #include <stdio.h>
// #define MAX 100

// int adjMatrix[MAX][MAX];
// int visited[MAX];
// void DFS(int node, int vertices){
//     visited[node] = 1;
//     printf("%d ",node);
//     for(int i=0;i<vertices;i++){
//         if(adjMatrix[node][i] == 1 && !visited[i]){
//             DFS(i,vertices);
//         }
//     }
// }
// int main(){
//     int vertices, edge, u, v, start=0;
//     printf("Enter the number of vertices: ");
//     scanf("%d",&vertices);
//     printf("Enter the number of edges: ");
//     scanf("%d",&edge);

//     for(int i=0;i<vertices;i++){
//         for(int j=0;j<vertices;j++){
//             scanf("%d %d",&u,&v);
//             adjMatrix[u][v] = 1;
//             adjMatrix[v][u] = 1;
//         }
//         for(int i=0;i<vertices;i++){
//             visited[i] = 0;
//         }
//     }
//     return 0;
// 
// #include <stdio.h>
// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int partition(int arr[], int low, int high){
//     int pivot = arr[high];
//     int i = low - 1;
//     for(int j=low;j<high;j++){
//         if(arr[j] <= pivot){
//         i++;
//         swap(&arr[i],&arr[j]);
//         }
//     }
//     swap(&arr[i+1], &arr[high]);
//     return i + 1;
// }
// void quickSort(int arr[], int low, int high){
//     if(low<high){
//         int pi = partition(arr, low, high);
//         quickSort(arr, low, pi-1);
//         quickSort(arr,pi+1,high);
//     }
// }
// void printArray(int arr[], int n){
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int arr[] = {10, 7, 8, 9, 1, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     printf("Unsorted array: ");
//     printArray(arr, n);
//     printf("Sorted array:   ");
//     quickSort(arr, 0, n - 1);
//     printArray(arr, n);
    
//     return 0;
// }

// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>
// int arr[256];
// int linearSearch(int n, int num){
//     int no_of_comparison = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i] == num){
//         printf("In linear search: Number %d found at index %d\n",num,i);
//         return no_of_comparison;
//         }
//         no_of_comparison++;
//     }
//     printf("number %d not frond in the array,\n",num);
//     return no_of_comparison;
// }
// void generateArray(int size){
//     for(int i=0;i<size;i++){
//         arr[i] = i + 1;
//     }
// }
// void benchmark(int size){
//     double ctime;
//     clock_t start, end;

//     start = clock();
//     int linearBest = linearSearch(size,arr[0]);
//     end = clock();
//     ctime = (double)(end-start) / CLOCKS_PER_SEC;
//     printf("In best case: comparison: %d time= %.6f",linearBest,ctime);
// }

// int main(){
    
//     return 0;
// }
// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>
// int arr[256];

// int binarySearch(int n, int num){
//     int no_of_comparison = 0,left=0,right=n-1;
//     while(left <= right){
//         no_of_comparison++;
//         int mid = (left+right)/2;
//         if(arr[mid] == num){
//             printf("In binary search: Number %d found at index %d\n",num,mid);
//             return no_of_comparison;
//         }
//         else if(arr[mid] < num){
//             left = mid + 1;
//         }
//         else{
//             right = mid - 1;         
//         }
//     }
// }
// int main(){
    
//     return 0;
// }

// #include <stdio.h>
// #define max 100
// int adjMatrix[max][max];
// int visited[max];
// void DFS(int node, int vertices){
//     visited[node] = 1;
//     printf("%d ",node);
//     for(int i=0;i<vertices;i++){
//         if(adjMatrix[node][i] == 1 && !visited[i]){
//             DFS(i, vertices);
//         }
//     }
// }
// int main(){
//     int vertices, edges, v,u, start=0;

//     printf("Enter the number of vertices: ");
//     scanf("%d",&vertices);
//     printf("Enter no of edges: ");
//     scanf("%d",&edges);

//     for(int i=0;i<vertices;i++){
//         for(int j =0;j<vertices;j++){
//             adjMatrix[i][j] = 0;
//         }
//     }
//     return 0;
// }
#include <stdio.h>

/*
 * Function to merge two sorted arrays (left[] and right[])
 * into a single sorted array (merged[]).
 *
 * Parameters:
 * left[]   -> First sorted array
 * right[]  -> Second sorted array
 * merged[] -> Resultant merged sorted array
 * nLeft    -> Size of left[]
 * nRight   -> Size of right[]
 */
void merge(int left[], int right[], int merged[], int nLeft, int nRight) {
    int i = 0;  // Index for left[]
    int j = 0;  // Index for right[]
    int k = 0;  // Index for merged[]

    // Compare elements of left[] and right[] and merge into merged[]
    while (i < nLeft && j < nRight) {
        if (left[i] <= right[j]) {
            merged[k++] = left[i++];
        } else {
            merged[k++] = right[j++];
        }
    }

    // Copy remaining elements of left[], if any
    while (i < nLeft) {
        merged[k++] = left[i++];
    }

    // Copy remaining elements of right[], if any
    while (j < nRight) {
        merged[k++] = right[j++];
    }
}

int main() {
    // Example arrays (already sorted individually)
    int left[] = {1, 3, 5, 7};         // left half
    int right[] = {2, 4, 6, 8, 10};    // right half
    int merged[9];                     // final merged array

    int nLeft = sizeof(left) / sizeof(left[0]);
    int nRight = sizeof(right) / sizeof(right[0]);

    // Print left array
    printf("Left Array: ");
    for (int i = 0; i < nLeft; i++) {
        printf("%d ", left[i]);
    }

    // Print right array
    printf("\nRight Array: ");
    for (int i = 0; i < nRight; i++) {
        printf("%d ", right[i]);
    }
    printf("\n");

    // Merge both halves
    merge(left, right, merged, nLeft, nRight);

    // Print merged array
    printf("Merged Array: ");
    for (int i = 0; i < nLeft + nRight; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
