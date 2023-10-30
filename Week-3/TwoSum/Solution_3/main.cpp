#include <stdio.h>
#include <map>

/*
    This solution have time complextity is O(n).
    This is an advanced way, you can skip it for now 
    because not everyone can understand.

    1. Take the input as an array of integers, 'arr', an integer 'target', 
       and the length of the array, 'lenOfArray'.
    2. Declaration and Initialization of std::map: A std::map object is declared 
       to map elements from the array arr to their positions in the array.
    3. First Loop - Creating a Mapping: In this loop, a mapping is created by 
       iterating through the arr array. Each element in the arr array becomes 
       a key in the mapping, and its corresponding value is the index of that 
       element in the array.
    4. Second Loop - Finding a Pair of Elements: In this loop, you iterate 
       through the arr array once again. At each step, you calculate the 
       complement value by subtracting the current element arr[i] from the target. 
       Then, you check if the complement exists in the map (i.e., it's a key 
       in numMap) and is not the same as the current element arr[i].
    5. Printing the Found Pair of Elements: If you find a pair of elements 
       where their sum equals the target, you print this pair using the printf 
       function. Note that you print arr[i] and arr[numMap[complement]], which 
       are the values of the current element and the element needed to have a 
       sum equal to the target.
    6. Breaking Out of the Loop: After finding a matching pair, you use break 
       to exit the loop. This ensures that you only print a single pair if there 
       are multiple matching pairs in the array.

    target = 9
    arr = [11 15 7 2]
    numMap = {
        11: 0,
        15: 1,
        7:  2,
        2:  3,
    }

    Remember that numMap is a pair of key and value.
    numMap.count(a) to check that is the key 'a' existing in numMap.

    i = 0:
        complement = target - arr[0] = 9 - 11 = -2
        numMap.count(-2) = false
    i = 1:
        complement = target - arr[1] = 9 - 15 = -6
        numMap.count(-6) = false
    i = 1:
        complement = target - arr[2] = 9 - 7 = 2
        numMap.count(2) = true
        numMap[2] = 3 != 1 => true
        print 7 and 2 out of the screen
        break
    end

    This solution has O(n) time complexity, 
    In this solution I have used HASHMAP to solve it. 
    I have to implement it in C++ because C doesn't have a map. 
    This is probably the best solution.
*/

void TwoSum(int arr[], int target, int lenOfArray) {
    std::map<int, int> numMap;

    for (int i = 0; i < lenOfArray; i++) {
        numMap[arr[i]] = i;
    }

    for (int i = 0; i < lenOfArray; i++) {
        int complement = target - arr[i];
        if (numMap.count(complement) && numMap[complement] != i) {
            printf("%d %d\n", arr[i], arr[numMap[complement]]);
            break;
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
