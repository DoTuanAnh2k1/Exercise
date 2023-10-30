#include <stdio.h>

/*
    In this solution, we need more "brain" here
    1. Take the input as an array of integers, 'arr', an integer 'target', 
       and the length of the array, 'lenOfArray'.
    2. Sort the array: In this implementation, Merge Sort is used for sorting. 
       Merge Sort is known for its time complexity of O(n logn). For more details on Merge Sort, 
       you can refer to this link: [Merge Sort Algorithm](https://www.digitalocean.com/community/tutorials/merge-sort-algorithm-java-c-python).
    3. Initialize two pointers, 'left' pointing to the first index of the array and 
       'right' pointing to the last index of the array.
    4. While 'left' is less than 'right':
        - If the sum of elements 'arr[left]' and 'arr[right]' is equal to 'target', print the pair of indices (left, right).
        - If the sum is less than 'target', increment 'left' by 1.
        - If the sum is greater than 'target', decrement 'right' by 1.

    target = 9
    arr = [11 15 7 2]
    after sorting
    arr = [2 7 11 15]
    
    left = 0, right = 3:
        arr[0] + arr[3] = 2 + 15 = 17 > 9
            right --
    left = 0, right = 2:
        arr[0] + arr[2] = 2 + 11 = 13 > 9
            right --
    left = 0, right = 1:
        arr[0] + arr[1] = 2 + 7 = 9 = 0
            print 2 and 7 out of screen
    end

    You can try with another array to more understand about this.

    This solution have O(n log n) time comlexity (O(n) + O(n logn) = O(n logn))
    Main idea of this way is TWO POINTER. 
    This two pointer is a strong algo for array when you need to reduce time complexity.
    Is also basic knowledge to understand BINARY SEARCH.
    You can practice more at here:
    https://leetcode.com/problemset/all/?topicSlugs=two-pointers&page=1
    Remember that this is more difficult than previous solution.
    If you not understand this, it's okay. You need more time.
*/


void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0; 
    j = 0; 
    k = l; 

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {

        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}


void TwoSum(int arr[], int target, int lenOfArray) {
    mergeSort(arr, 0, lenOfArray - 1);
    int left = 0;
    int right = lenOfArray - 1;

    while (left < right) {
        int temp = arr[left] + arr[right];
        if (temp == target) {
            printf("%d %d", arr[left], arr[right]);
            left ++;
            right --;
        }
        if (temp > target) {
            right --;
        }
        if (temp < target) {
            left ++;
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
