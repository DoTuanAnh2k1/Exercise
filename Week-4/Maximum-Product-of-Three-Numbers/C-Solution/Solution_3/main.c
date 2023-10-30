#include <stdio.h>
#include <limits.h>

int max(int a, int b) {
    return a > b ? a : b;
}

void findThreeLargestNumbers(int arr[], int n, int* a, int* b, int* c) {
    *a = INT_MIN;
    *b = INT_MIN;
    *c = INT_MIN;

    for (int i = 0; i < n; i++) {
        int num = arr[i];
        if (num > *c) {
            *a = *b;
            *b = *c;
            *c = num;
        } else if (num > *b) {
            *a = *b;
            *b = num;
        } else if (num > *a) {
            *a = num;
        }
    }
}

void findTwoSmallestNumbers(int arr[], int n, int* firstSmallest, int* secondSmallest) {
    *firstSmallest = INT_MAX;
    *secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        int num = arr[i];
        if (num < *firstSmallest) {
            *secondSmallest = *firstSmallest;
            *firstSmallest = num;
        } else if (num < *secondSmallest && num != *firstSmallest) {
            *secondSmallest = num;
        }
    }

    if (*secondSmallest == INT_MAX) {
        *secondSmallest = -1;
    }
}

void maximumProduct(int arr[], int n) {
    int a, b, c, d, e;
    findThreeLargestNumbers(arr, n, &a, &b, &c);
    findTwoSmallestNumbers(arr, n, &d, &e);

    printf("%d\n", max(a * b * c, c * d * e));
}

int main() {
    int arr1[] = {1, 2, 3};
    maximumProduct(arr1, 3);

    int arr2[] = {1, 2, 3, 4};
    maximumProduct(arr2, 4);

    int arr3[] = {-1, -2, -3};
    maximumProduct(arr3, 3);

    int arr4[] = {-1, -2, -3, 0, 1, 2};
    maximumProduct(arr4, 6);

    return 0;
}
