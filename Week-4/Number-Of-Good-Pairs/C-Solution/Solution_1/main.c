#include <stdio.h>

void numberOfGoodPairs(int arr[], int len) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
    }
    printf("%d \n", count);
}

int main() {
    int arr[] = {1,2,3,1,1,3};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    int brr[] = {1,1,1,1};
    int sizeBrr = sizeof(brr) / sizeof(brr[0]);
    int crr[] = {1,2,3};
    int sizeCrr = sizeof(crr) / sizeof(crr[0]);

    numberOfGoodPairs(arr, sizeArr);
    numberOfGoodPairs(brr, sizeBrr);
    numberOfGoodPairs(crr, sizeCrr);
    return 0;
}