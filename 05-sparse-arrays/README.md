# Sparse Arrays

## Problem
Given a list of strings and a list of query strings, determine how many times each query string occurs in the original list.

Naively re-scanning the full list for every query is O(N×Q). Instead, build a frequency hash map once in O(N), then answer each query in O(1), for a total of O(N + Q).

## Example

Input:
```
4
aba baba aba xzxb
2
aba xzxb
```

Output:
```
2
1
```

## Complexity
- Time: O(N + Q)
- Space: O(N)