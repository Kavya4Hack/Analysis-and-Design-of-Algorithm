#include <stdio.h>

// Function to swap two elements
void swap(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

// Function to implement Greedy Fractional Knapsack
void fractionalKnapsack(float w[], float p[], int n, float W) {
    float ratio[20], x[20], weight = 0, totalProfit = 0;
    int i, j;

    // Calculate profit/weight ratio
    for (i = 0; i < n; i++)
        ratio[i] = p[i] / w[i];

    // Sort items by ratio in descending order
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (ratio[i] < ratio[j]) {
                swap(&ratio[i], &ratio[j]);
                swap(&w[i], &w[j]);
                swap(&p[i], &p[j]);
            }
        }
    }

    // Initialize x[i] = 0
    for (i = 0; i < n; i++)
        x[i] = 0.0;

    // Apply Greedy Algorithm
    i = 0;
    while (weight < W && i < n) {
        if (weight + w[i] <= W) {
            x[i] = 1.0;
            weight += w[i];
            totalProfit += p[i];
        } else {
            x[i] = (W - weight) / w[i];
            totalProfit += x[i] * p[i];
            weight = W;
        }
        i++;
    }

    // Display Results
    printf("\nItem\tWeight\tProfit\tFraction");
    for (i = 0; i < n; i++)
        printf("\n%d\t%.2f\t%.2f\t%.2f", i + 1, w[i], p[i], x[i]);

    printf("\n\nTotal Profit = %.2f\n", totalProfit);
}

int main() {
    int n, i;
    float w[20], p[20], W;

    printf("Enter the number of items: ");
    scanf("%d", &n);

    printf("Enter weights and profits of each item:\n");
    for (i = 0; i < n; i++) {
        printf("Item %d (Weight Profit): ", i + 1);
        scanf("%f %f", &w[i], &p[i]);
    }

    printf("Enter the capacity of knapsack: ");
    scanf("%f", &W);

    fractionalKnapsack(w, p, n, W);
    return 0;
}