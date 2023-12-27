## Problem
### Lover
Problem 3: Count Bricks
Quang-Trung loved stacking bricks when he was younger. He has n bricks, and each brick has a hardness level ai (0 < i < n). For each brick with hardness level ai, it means that it can withstand a maximum of ai bricks stacked on top of it. The question is, `what is the highest stack of bricks he can build?`

### Example
**Example 1:**
- Input: n = 3, a = [1 2 1 1]
- Output: 3
- Explanation: We can stack the brick with hardness level 2 at the bottom, followed by the brick with hardness level 1, and finally the brick with hardness level 1 on top.

**Example 2:**
- Input: n = 7, a = [1 1 1 5 1 1 10]
- Output: 4
- Explanation: We can stack in the order 10 -> 5 -> 1 -> 1.

**Example 3:**
- Input: n = 7, a = [10 10 10 10 10 10 10]
- Output: 7

## Solution

Our goal is to select the hardest bricks first, so we sort the array `a` accordingly.

Subsequently, starting from the brick with the longest length (retrieved from the end of the sorted vector), the function endeavors to create a row of bricks by placing consecutive bricks with decreasing lengths.

The process proceeds as follows:

1. The function initiates with the brick with the longest length (target), and after each iteration, it decrements the target by 1.
2. Simultaneously, at each iteration, the function checks whether the target is equal to 0. If it equals 0, this indicates that a complete row of bricks has been formed, and the function returns the number of bricks arranged (ans).
3. If the target is not 0, the function continues to decrement the target and increment the variable ans by one.

Ultimately, the function returns the number of bricks required to construct the maximum-length row.