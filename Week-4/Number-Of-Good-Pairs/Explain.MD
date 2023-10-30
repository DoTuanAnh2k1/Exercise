## Problem

### Number of Good Pairs

Given an array of integers `nums`, return the number of good pairs.
A pair `(i, j)` is called good if `nums[i] == nums[j]` and `i < j`.

### Example

**Example 1:**
- Input: `nums = [1, 2, 3, 1, 1, 3]`
- Output: `4`

**Example 2:**
- Input: `nums = [1, 1, 1, 1]`
- Output: `6`

## Solution
### Brute Force Approach

We will check all pairs of numbers to see if they satisfy the condition or not?

This solution have `O(n^2)` time complexity.

**Simualtion**

`nums = [1, 2, 3, 1, 1, 3]`

`count = 0`

    i = 0:
        j = 1: 
            nums[0] = 1
            nums[1] = 2
            count = 0
        j = 2:
            nums[0] = 1
            nums[2] = 3
            count = 0
        j = 3:
            nums[0] = 1
            nums[3] = 1
            count = 1
        j = 4: 
            nums[0] = 1
            nums[4] = 1
            count = 2
        j = 5:
            nums[0] = 1
            nums[5] = 3
            count = 2
    i = 1:
        j = 2:
            nums[1] = 2
            nums[2] = 3
            count = 2
        j = 3:
            nums[1] = 2
            nums[3] = 1
            count = 2
        j = 4:
            nums[1] = 2
            nums[4] = 1
            count = 2
        j = 5:
            nums[1] = 2
            nums[5] = 3
            count = 2
    i = 2:
        j = 3:
            nums[2] = 3
            nums[3] = 1
            count = 2
        j = 4:
            nums[2] = 3
            nums[4] = 1
            count = 2
        j = 5:
            nums[2] = 3
            nums[5] = 3
            count = 3
    i = 3:
        j = 4:
            nums[3] = 1
            nums[4] = 1
            count = 4
        j = 5:
            nums[3] = 1
            nums[5] = 3
            count = 4
    i = 4:
        j = 5:
            nums[4] = 1
            nums[5] = 3
            count = 4
    
`=> count = 4`

### HashMap Approach

We will create a `map` to map between the value and its number of occurrences. After each encounter, we just need to add `count` to the number of previous occurrences.

This solution have `O(n)` time complexity.

**Simualation**

`nums = [1, 2, 3, 1, 1, 3]`

`count = 0`

`map <int, int> frequency`

    i = 0:
        frequency[arr[0]] = frequency[1] = 0
        =>  frequency[1] = 0 + 1 = 1
            count = 0
    i = 1:
        frequency[arr[1]] = frequency[2] = 0
        =>  frequency[2] = 0 + 1 = 1
            count = 0
    i = 2:
        frequency[arr[2]] = frequency[3] = 0
        =>  frequency[3] = 0 + 1 = 1
            count = 0
    i = 3:
        frequency[arr[3]] = frequency[1] = 1
        =>  frequency[1] = 1 + 1 = 2
            count = 0 + 1 = 1
    i = 4:
        frequency[arr[4]] = frequency[1] = 2
        =>  frequency[1] = 2 + 1 = 3
            count = 1 + 2 = 3
    i = 5:
        frequency[arr[5]] = frequency[3] = 1
        =>  frequency[3] = 1 + 1 = 2
            count = 3 + 1 = 4
    => count = 4

