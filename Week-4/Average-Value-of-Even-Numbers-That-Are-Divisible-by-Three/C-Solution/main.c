#include <stdio.h>

void averageValue(int arr[], int len) {
    int sum = 0;
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] % 6 == 0) {
            sum = sum + arr[i];
            count ++;
        } 
    }
    //Quy, 
    if (count == 0) {
        printf("%d \n", 0);
    } else {
        printf("%f \n", (double)sum / count);
    }
}

int main() {
    int arr[] = {1,3,6,10,12,15};
    int len = sizeof(arr) / sizeof(arr[0]);
    averageValue(arr, len);
    int brr[] = {1,2,4,7,10};
    len = sizeof(brr) / sizeof(brr[0]);
    averageValue(brr, len);
    return 0;
}