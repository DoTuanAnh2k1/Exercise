#include <stdio.h>

/*
    This is another solution. 
    Here, I'm using a mathematical approach. 
    First, it's important to remember the following 
    principles related to the XOR operation:
    1. a XOR b = c -> a XOR c = b && b XOR c == a
    2. a XOR a = 0
    3. a XOR 0 = a
    
    Now, let's put these principles into action. 
    For instance, if we have an array with one 
    missing number, we can use these XOR properties 
    to efficiently find the missing element. 
    
    Here's how it works: 
    
    1. Initialize a variable missingNumMask to 0. 
       This variable will be used to keep track of the 
       missing number.
    2. In the first loop, iterate from 0 to n. 
       For each iteration, perform a bitwise XOR 
       (^) operation between missingNumMask and 
       the current value of i. This operation 
       accumulates the sum of all integers from 0 
       to n and stores it in the missingNumMask.
    3. In the second loop, go through the elements 
       of the array arr. For each element arr[i], 
       perform a bitwise XOR operation between 
       missingNumMask and arr[i]. This operation 
       effectively removes all the numbers that 
       exist in the array from the accumulated sum 
       in missingNumMask.
    4. The final result in the variable missingNumMask 
       will be the missing number in the array. 
*/

void MisssingNumber(int arr[], int n) {
    int missingNumMask = 0;
    for (int i = 0; i <= n; i ++) {
        missingNumMask = missingNumMask ^ i;
        
    }

    for (int i = 0; i < n; i++) {
        missingNumMask = missingNumMask ^ arr[i];
    }
    printf("%d", missingNumMask);
}

int main() {
    int arr[] = {9,6,4,2,3,5,7,0,1};
    MisssingNumber(arr, 9);
    return 0;
}