## Problem
### Lover
Problem 1: Lover
Winter is approaching. The chilly air permeates, causing the small lonely hearts to yearn for a lover, someone to hold hands with and go out together. Understanding this, Hai organized a matchmaking event for those lonely souls.

At the event, Hai arranged all those who wanted to pair up to stand in a line. Two people standing next to each other would form a couple and leave the line. Due to Hai's past relationship with someone named Hai, he disliked people with the same name, so he set a rule: `if two people standing next to each other had the same name, they would not be paired.` Help Hai determine how many people cannot be paired.

In other words, you are given a one-dimensional array containing lowercase letters. If two identical letters stand next to each other, they are going to be removed. After removing all pairs, determine minimum letters are left.

Subproblem: You are given a one-dimensional array containing 'a' or 'b'.

### Example
**Example 1:**
- Input: ababababa
- Output: 1
- Explanation: Only one person named 'a' cannot be paired.

**Example 2:**
- Input: aabc
- Output: 0
- Explanation: There is one 'a-b' pair and one 'a-c' pair.

**Example 3:**
- Input: avbvvcvvvd
- Output: 2

**Example 4:**
- Input: dacfcc
- Output: 0 

## Solution
### Sub Problem
It quite easy, all you have to do that count all number char 'a' and 'b'. After that the answer will be `|count('a') - count('b')|`

### Math Appoarch
Consider a finite string; obviously, all characters in it are the same, as otherwise, we could remove some pair of characters.

If some character occurs in the string more than ⌊𝑛/2⌋ times, then the final string will always consist only of it, because with one deletion we can only get rid of one occurrence. To minimize the number of these characters, we need to remove one occurrence each time. We can always do this until the string is left with only such a character.

Otherwise, we can remove all possible pairs regardless of the order of deletions.

### Priority Queue
This is an advanced approach to solving the problem, employing a sophisticated algorithm called Priority Queue.

In the first step, I count the occurrences of each character. After that, I initialize a priority queue and add each element from the counting array to solve the problem. I use a loop with the condition while the length of the queue is less than 2. In each iteration, I pop the top 2 elements from the queue and decrement each of them by 1. If they are not equal to 0, I push them back into the queue.

The answer is the only remaining element at the top of the queue.
