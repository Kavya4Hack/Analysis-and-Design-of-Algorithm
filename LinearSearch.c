#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arr[256];

// Linear Search
int linearSearch(int n, int num) {
    int no_of_Comparison = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            printf("In Linear Search: Number %d found at index %d\n", num, i);
            return no_of_Comparison;
        }
        no_of_Comparison++;
    }
    printf("Number %d not found in the array.\n", num);
    return no_of_Comparison;
}

// Generate array of size elements (1 to size)
int generateArray(int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
}
// benchmark function will conatin the cases i.e. best, worst and avg wich also include the time of completion.
void benchmark(int size) {
    clock_t start, end;
    double ctime;

    printf("\n--- LINEAR SEARCH ---\n");

    // Best Case (First element)
    start = clock();
    int linearBest = linearSearch(size, arr[0]);
    end = clock();
    ctime = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Best Case: Comparisons = %d, Time = %.6f sec\n", linearBest, ctime);

    // Worst Case (Not present)
    start = clock();
    int linearWorst = linearSearch(size, -1);
    end = clock();
    ctime = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Worst Case: Comparisons = %d, Time = %.6f sec\n", linearWorst, ctime);

    // Average Case (Middle element)
    start = clock();
    int linearAvg = linearSearch(size, arr[size / 2]);
    end = clock();
    ctime = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Average Case: Comparisons = %d, Time = %.6f sec\n", linearAvg, ctime);
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size > 256)
    {
        printf("Size exceeds maximum limit of 256. Setting size to 256.\n");
        size = 256;
    }

    generateArray(size);
    benchmark(size);

    return 0;
}
