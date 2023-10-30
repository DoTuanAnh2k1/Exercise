#include <stdio.h>

void maximumProduct(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        for (int j = 1; j < len; j++) {
            if (arr[i] > arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    int product1 = arr[len - 1] * arr[len - 2] * arr[len - 3];
    int product2 = arr[0] * arr[1] * arr[len - 1];
    if (product1 > product2) {
        printf("%d\n", product1);
    } else {
        printf("%d\n", product2);
    }
}

int main() {
    int arr[] = {1,2,3};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    int brr[] = {1,2,3,4};
    int sizeBrr = sizeof(brr) / sizeof(brr[0]);
    int crr[] = {-1,-2,-3};
    int sizeCrr = sizeof(crr) / sizeof(crr[0]);
    int drr[] = {-1,-2,-3, 0, 1, 2};
    int sizeDrr = sizeof(drr) / sizeof(drr[0]);

    maximumProduct(arr, sizeArr);
    maximumProduct(brr, sizeBrr);
    maximumProduct(crr, sizeCrr);
    maximumProduct(drr, sizeDrr);    
    return 0;
}