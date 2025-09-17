// Factorial Program Using Iterative Method:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    double ctime;
    clock_t start, end;
    start = clock();

    int n, i;
    printf("Enter a number for factorial: ");
    scanf("%d", &n);

    int fact = 1;
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("The factorial is %d\n", fact);

    end = clock();
    ctime = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Output returned in %f seconds", ctime);
    return 0;
}

// Factorial Program Using Recursive Method:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int factorial_recursive(int n) {
    if (n > 0) {
        return n * factorial_recursive(n - 1);
    } else {
        return 1;
    }
}

int main() {
    int a;
    double ctime;
    clock_t start, end;
    int n;

    printf("Enter a number for factorial: ");
    scanf("%d", &n);

    start = clock();  // Start time before calculation
    a = factorial_recursive(n);
    end = clock();    // End time after calculation

    printf("Factorial of %d is %d\n", n, a);

    ctime = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Output returned in %f seconds\n", ctime);

    return 0;
}