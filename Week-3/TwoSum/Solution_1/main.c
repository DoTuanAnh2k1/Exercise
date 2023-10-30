#include <stdio.h>

/*
    Visualize the algo works
    1. Take the input as an array of integers arr, an integer target, and the length of the array lenOfArray.
    2. Use two nested loops to iterate through all pairs of elements in the array:
        The outer loop (i) iterates from 0 to (lenOfArray - 1).
        The inner loop (j) iterates from (i + 1) to (lenOfArray - 1).
    3. At each step, check if the elements arr[i] and arr[j] have a sum equal to the target.
    4. If the sum is equal to the target, print the pair of elements (arr[i], arr[j]).
    5. End the algorithm after going through all possible pairs.

    arr = [11 15 7 2]
    target = 9
    start i = 0
    i = 0:
        j = 1: arr[0] + arr[1] = 11 + 15 = 36 != 9
            continue
        j = 2: arr[0] + arr[2] = 11 + 7 = 18 != 9
            continue
        j = 3: arr[0] + arr[3] = 11 + 2 = 13 != 9
            continue
    i = 1:
        j = 2: arr[1] + arr[2] = 15 + 7 = 22 != 9
            continue
        j = 3: arr[1] + arr[3] = 15 + 2 = 17 != 9
            continue
    i = 2:
        j = 3: arr[2] + arr[3] = 7 + 2 = 9 (true)
            print 7 and 2 out of screen
    end

    This solution have O(n^2) time complexity and O(1) space complexity.
    This is the easiest way to think, call BRUTEFORCE.
    When you try solving problem, just brute force it for we can have the answer first, 
    after that we'll think how to reduce complexity of time and space
*/


void TwoSum(int arr[], int target, int lenOfArray) {
    for (int i = 0; i < lenOfArray; i ++) {
        for (int j = i + 1; j < lenOfArray; j ++) {
            if (arr[i] + arr[j] == target) {
                printf("%d %d", arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int arr[] = {11, 15, 7, 2};
    int target = 9;
    int lenOfArray = sizeof(arr) / sizeof(arr[0]);

    TwoSum(arr, target, lenOfArray);

    return 0;
}





