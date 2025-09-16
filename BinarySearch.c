#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arr[256];

// Binary Search
int binarySearch(int n, int num)
{
    int left = 0, right = n - 1;
    int no_of_Comparison = 0;

    while (left <= right)
    {
        no_of_Comparison++;
        int mid = (left + right) / 2;
        if (arr[mid] == num)
        {
            printf("In Binary Search: Number %d found at index %d\n", num, mid);
            return no_of_Comparison;
        }
        else if (arr[mid] < num)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    printf("Number %d not found in the array.\n", num);
    return no_of_Comparison;
}

// Generate array of size elements (1 to size)
void generateArray(int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }
}

void benchmarkBinary(int size)
{
    clock_t start, end;
    double time_taken;

    printf("\n--- BINARY SEARCH ---\n");
    // Best Case (Middle)
    start = clock();
    int binaryBest = binarySearch(size, arr[size / 2]);
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Best Case: Comparisons = %d, Time = %.6f sec\n", binaryBest, time_taken);

    // Worst Case (Not present)
    start = clock();
    int binaryWorst = binarySearch(size, -1);
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Worst Case: Comparisons = %d, Time = %.6f sec\n", binaryWorst, time_taken);

    // Average Case (Element at 25% index)
    start = clock();
    int binaryAvg = binarySearch(size, arr[size / 4]);
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Average Case: Comparisons = %d, Time = %.6f sec\n", binaryAvg, time_taken);
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
    benchmarkBinary(size);

    return 0;
}
