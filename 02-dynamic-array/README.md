# Dynamic Array

## Problem
Maintain `n` empty sequences, indexed from `0` to `n-1`. Process a series of queries on them, where each query modifies a sequence or asks for an element from it.

Each query has two integers, `x` and `y`. There's also a variable `lastAnswer`, initially `0`.

- First compute `seasonIndex = (x XOR lastAnswer) % n`
- If the first integer in the query is `1`: append `y` to `seqList[seasonIndex]`
- If the first integer in the query is `2`: find `y % size` of that sequence, print the value at that index, and set `lastAnswer` to it

## Example

Input:
```
2 5
1 0 5
1 1 7
1 0 3
2 1 0
2 1 1
```

Output:
```
7
3
```

## Complexity
- Time: O(N + Q)
- Space: O(N)