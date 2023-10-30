#include <stdio.h>

void LonelyNumber(int arr[], int len) {
    int onlynumber = 0;
    for (int i = 0; i < len; i++) {
        onlynumber = onlynumber ^ arr[i];
    }
    printf("%d", onlynumber);
}

int main() {
    int arr[] = {1, 2, 3, 4, 3, 2, 1};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    LonelyNumber(arr, sizeArr);
    return 0;
}