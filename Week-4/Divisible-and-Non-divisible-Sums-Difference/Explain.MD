## Problem

### Divisible and Non-divisible Sums Difference

You are given positive integers n and m. Define two integers, num1 and num2, as follows:

- num1: The sum of all integers in the range [1, n] that are not divisible by m.
- num2: The sum of all integers in the range [1, n] that are divisible by m.

Return the integer num1 - num2.

### Example

**Example 1:**
- Input: `n = 10, m = 3`
- Output: `19`

**Example 2:**
- Input: `n = 5, m = 6`
- Output: `15`

## Solution
### Brute Force Approach

Solving this problem is quite easy, we just need to do a loop through all the numbers from `1` to `n`. If the number is divisible by `m` then add it to `sum1`, otherwise add it to `sum2`. Print `sum2 - sum1` to the screen.

This solution have `O(n)` time complexity.

**Simualtion**

`n = 10, m = 3`

`sum1 = 0 and sum2 = 0`

    i = 1
        i % m = 1 % 3 = 1 != 0
        sum1 = 0
        sum2 = 0 + 1 = 1
    i = 2
        i % m = 2 % 3 = 2 != 0
        sum1 = 0
        sum2 = 1 + 2 = 3
    i = 3
        i % m = 3 % 3 = 0 
        sum1 = 0 + 3 = 3
        sum2 = 3
    i = 4
        i % m = 4 % 3 = 1 != 0
        sum1 = 3
        sum2 = 3 + 4 = 7
    i = 5
        i % m = 5 % 3 = 2 != 0
        sum1 = 3
        sum2 = 7 + 5 = 12
    i = 6
        i % m = 6 % 3 = 0
        sum1 = 3 + 6 = 9
        sum2 = 12
    i = 7
        i % m = 7 % 3 = 1 != 0
        sum1 = 9
        sum2 = 12 + 7 = 19
    i = 8
        i % m = 8 % 3 = 2 != 0
        sum1 = 9
        sum2 = 19 + 8 = 27
    i = 9
        i % m = 9 % 3 = 0
        sum1 = 9 + 9 = 18
        sum2 = 27
    i = 10
        i % m = 10 % 3 = 1 != 0
        sum1 = 18
        sum2 = 27 + 10 = 37
    sum2 - sum1 = 37 - 18 = 19

### Math Approach
This solution was inspired by an idea from a classmate. The main idea of this solution is to calculate the sum of all numbers from `1` to `n` and calculate the sum of all numbers of the arithmetic progression with common difference `m` from `1` to `n` and then calculate their difference.

If you have forgotten, here is the formula for calculating the sum of numbers from `1` to `n`

    s = n * (n + 1) / 2

This is the formula for the sum of arithmetic progressions with common difference of `m`.

    s = numberOfDivisibleM * m + numberOfDivisibleM * (numberOfDivisibleM - 1) * m / 2

This solution have `O(1)` time complexity.

Good job, shout out to class.

**Simualtion**

`n = 10, m = 3`

`n = n - n % m = 10 - 10 % 3 = 10 - 1 = 9`

`numberOfDivisibleM = (9 - 3) / 3 + 1 = 3`

`sum = 10 * 11 / 2 = 55`

`sum1 = 3 * 3 + 3 * (3 - 1) * 3 / 2 = 9 + 3 * 2 * 3 / 2 = 9 + 9 = 18`

`sum2 - sum1 = (sum - sum1) - sum1 = sum - 2sum1 = 55 - 18 * 2 = 19` 
    