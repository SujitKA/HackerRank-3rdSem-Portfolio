# Time Conversion

## Problem
Convert a 12-hour AM/PM time format to 24-hour (military) time format.

- 12:00:00AM → 00:00:00
- 12:00:00PM → 12:00:00
- Any other AM time: keep hour as-is
- Any other PM time: add 12 to the hour

## Example

Input:
```
07:05:45PM
```

Output:
```
19:05:45
```

## Complexity
- Time: O(1)
- Space: O(1)