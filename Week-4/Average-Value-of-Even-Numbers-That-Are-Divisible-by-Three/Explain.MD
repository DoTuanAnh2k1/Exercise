## Problem

### Average Value of Even Numbers That Are Divisible by Three

Given an integer array nums of positive integers, return the average value of all even integers that are divisible by 3. Note that the average of n elements is the sum of the n elements divided by n and rounded down to the nearest integer.

### Example

**Example 1:**
- Input: `arr = [1, 3, 6, 10, 12, 15]`
- Output: `9`

**Example 2:**
- Input: `arr = [1, 2, 4, 7, 10]`
- Output: `0`

## Solution
### Brute Force Approach
In this problem, it is easy to see that an even number is divisible by 3, which means that number is divisible by 6.
So we just need to create a loop that searches each element of the array to find the sum of all those numbers.

Note that the array may not have any matching elements, so we must check again.

**Simualtion**

`arr = [1, 3, 6, 10, 12, 15]`

`count = 0 and sum = 0`

    i = 0
        arr[0] = 1 % 6 = 1 != 0
        sum = 0
        count = 0
    i = 1
        arr[1] = 3 % 6 = 3 != 0
        sum = 0
        count = 0
    i = 2
        arr[2] = 6 % 6 = 0 = 0
        sum = 0 + 6 = 6
        count = 1
    i = 3
        arr[3] = 10 % 6 = 4 != 0
        sum = 6
        count = 1
    i = 4
        arr[4] = 12 % 6 = 0 = 0
        sum = 6 + 12 = 18
        count = 2
    i = 5
        arr[5] = 15 % 6 = 3 != 0
        sum = 18
        count = 2
    aver = sum / count = 18 / 2 = 9
    