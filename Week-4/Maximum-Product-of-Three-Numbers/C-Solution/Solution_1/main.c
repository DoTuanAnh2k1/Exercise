#include <stdio.h>
#include <limits.h>

int max(int a, int b) {
    return a > b ? a : b;
}

void maximumProduct(int arr[], int n) {
    int maxProduct = INT_MIN;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                maxProduct = max(maxProduct, arr[i] * arr[j] * arr[k]);
            }
        }
    }

    printf("%d\n", maxProduct);
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
