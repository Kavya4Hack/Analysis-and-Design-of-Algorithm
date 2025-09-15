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
