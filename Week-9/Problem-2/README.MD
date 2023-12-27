## Problem
### Lover
Problem 2: Keyboard
Thành went out on a beautiful day and found a keyboard. Excitedly, he brought it home to use. However, since it was an item from outside the market, he felt sad because the keyboard was damaged. Every time he wanted to press the 'b' key, `the lowercase letter closest to the right would be deleted`, and when pressing the 'B' key, `the uppercase letter closest to the right would be deleted`. Note that if the string has no characters, pressing 'b' or 'B' will still result in an empty string.

Help Thành determine what the string will be after his input.

Smaller problem: The string only consists of lowercase letters.

### Example
**Example 1:**
- Input: ARaBbbitBaby
- Output: ity
- Explanation: A - AR - ARa - Aa - A - A - Ai - Ait - it - ita - it - ity

**Example 2:**
- Input: BBbB
- Output:

**Example 3:**
- Input: asadbfbbawebasbababbasdbfbfasd
- Output: asawasfasd

## Solution

In this problem, the goal is to identify and store the positions of 'b', 'B', and characters that need to be removed. To achieve this, I use a vector named `removeId`.

Next, it's crucial to locate all positions of uppercase and lowercase characters so that they can be removed from the array. It's important to remove them from the array after processing 'b' and 'B'.

Once we have a `removeId` vector containing all the positions that need removal, we can construct the final answer by adding the remaining characters.