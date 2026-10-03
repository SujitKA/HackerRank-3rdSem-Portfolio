# Diagonal Difference

**Platform:** HackerRank
**Language:** C++
**Topic:** Arrays, 2D matrices

## Problem

Given an `n x n` square matrix, calculate the absolute difference between the sums of its two diagonals:

- **Primary diagonal:** elements `arr[i][i]`
- **Secondary diagonal:** elements `arr[i][n-1-i]`

## Example

Input:

```
3
11 2 4
4 5 6
10 8 -12
```

- Primary diagonal: `11 + 5 + (-12) = 4`
- Secondary diagonal: `4 + 5 + 10 = 19`
- Absolute difference: `|4 - 19| = 15`

Output:

```
15
```

## Approach

1. Loop `i` from `0` to `n - 1`.
2. In each iteration, add `arr[i][i]` to the primary sum and `arr[i][n-1-i]` to the secondary sum.
3. Subtract the two sums and take the absolute value.

Both diagonals are computed in a single pass, so the matrix is traversed only once.

## Complexity

| | Complexity |
|---|---|
| Time | O(n) |
| Space | O(1) extra (excluding the input matrix) |

## How to Run

```bash
g++ 01-diagonal-difference.cpp -o prg
./prg
```

Then enter `n` followed by the matrix rows.

## Files

- `01-diagonal-difference.cpp`: solution
- `README.md`: this file