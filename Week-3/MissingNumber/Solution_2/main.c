#include <stdio.h>

/*
    Here is an alternative solution. We recognize 
    that the sum of integers from 0 to n follows a formula:
            sum = (n + 1) * n / 2
    We can also easily calculate the sum of all elements in 
    the array. Therefore, the answer is simply the difference 
    between the sum of elements in the array and the sum of 
    integers from 0 to n.
    This solution have only O(n) time complexity.
*/

void MisssingNumber(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    int sumTemp = (n + 1) * n / 2;
    int answer = sumTemp - sum;
    printf("%d", answer);
}

int main() {
    int arr[] = {9,6,4,2,3,5,7,0,1};
    MisssingNumber(arr, 9);
    return 0;
}