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
