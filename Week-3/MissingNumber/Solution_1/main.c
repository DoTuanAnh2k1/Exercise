#include <stdio.h>

/*
    As mentioned earlier, we are employing a brute force 
    approach to solve this problem. It's a straightforward 
    task; we simply need to iterate from 0 to n and check 
    if there is a number that doesn't exist in the array. 
    If such a number is found, we return it.

    arr = [9 6 4 2 3 5 7 0 1]
    n = 9
    i = 0
        j = 0: arr[0] = 9 != 0
        j = 1: arr[1] = 6 != 0
        j = 2: arr[2] = 4 != 0
        j = 3: arr[3] = 2 != 0
        j = 4: arr[4] = 3 != 0
        j = 5: arr[5] = 5 != 0
        j = 6: arr[6] = 7 != 0
        j = 7: arr[7] = 0 => exist = 1 => break
    i = 1
        j = 0: arr[0] = 9 != 1
        j = 1: arr[1] = 6 != 1
        j = 2: arr[2] = 4 != 1
        j = 3: arr[3] = 2 != 1
        j = 4: arr[4] = 3 != 1
        j = 5: arr[5] = 5 != 1
        j = 6: arr[6] = 7 != 1
        j = 7: arr[7] = 0 != 1
        j = 8: arr[8] = 1 => exist = 1 => break
    .
    .
    .
    .
    i = 8
        j = 0:
        .
        .
        .
        j = 7: arr[7] = 0 != 8
        j = 8: arr[8] = 1 != 8
        => exist = 0 => print 8 out of screen
    end.

    This solution have O(n^2) time complexity.
    Not think here more to discuss.
*/

void MisssingNumber(int arr[], int n) {
    for (int i = 0; i <= n; i++) {
        int exist = 0;
        for (int j = 0; j < n; j++) {
            if (i == arr[j]) {
                exist = 1;
                break;
            } 
        }
        if (exist == 0) {
            printf("%d", i);
            break;
        }
    }
}

int main() {
    int arr[] = {9,6,4,2,3,5,7,0,1};
    MisssingNumber(arr, 9);
    return 0;
}