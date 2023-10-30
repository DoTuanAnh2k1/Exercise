## Problem

### Maximum Product of Three Numbers

Given an integer array `arr`, find three numbers whose product is maximum and return the maximum product.

### Example

**Example 1:**
- Input: `arr = [1, 2, 3]`
- Output: `6`

**Example 2:**
- Input: `arr = [3, 2, 1, 4]`
- Output: `24`

**Example 3:**
- Input: `arr = [-1, -2, -3]`
- Output: `15`

**Example 4:**
- Input: `arr = [-1, -2, -3, 0, 1, 2]`
- Output: `12`

## Solution
### Brute Force Approach

We will try all possible sets of 3 numbers in the array to find the largest product of 3 numbers.

This solution have `O(n^3)` time complexity.

**Simualtion**

`arr = [3, 2, 1, 4]`

`max = 0`

    i = 0
        j = 1
            k = 2: arr[0] * arr[1] * arr[2] = 3 * 2 * 1 = 6
                => max = 6
            k = 3: arr[0] * arr[1] * arr[3] = 3 * 2 * 4 = 24
                => max = 24
        j = 2:
            k = 3: arr[0] * arr[2] * arr[3] = 1 * 3 * 4 = 12
                => max = 24 

`max = 24`

### Sorting Approach

It can be easily recognized that the largest product of 3 numbers in the array will be the product of the 3 largest numbers in the array or the product of the largest number in the array along with the 2 smallest numbers in the array, so we arrange the array to be able to Find the necessary numbers listed.

This solution has `O(n^2)` or `O(n logn)` time complexity depending on the sorting algorithm.

**Simualation**

`arr = [3, 2, 1, 4]`

    *After sorting
    arr = [1, 2, 3, 4]
    n = len(arr) = 4
    product_1 = arr[n - 1] * arr[n - 2] * arr[n - 3] = 4 * 3 * 2 = 24
    product_2 = arr[0] * arr[1] * arr[n - 1] = 1 * 2 * 4 = 8

    because product_2 < product_1 => max = product_1 = 24

### Maximum and minimum Approach

Similar to the idea of the above solution, we realize that we do not need to sort to find the 3 largest numbers and 2 smallest numbers of the array.

This solution has `O(n)` time complexity.

**Simualation**

Just read the code, I am too lazy to simualate this :(((((