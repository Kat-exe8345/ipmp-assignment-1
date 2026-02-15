### Submission Link:
[Rotate Array](https://leetcode.com/problems/rotate-array/submissions/1910686251)

## Concept

Rotates the array in-place using the three-reversal technique. First, reduce the rotation count with $k \bmod n$ so the shift stays within bounds. Then it reverse the entire array, reverse the first $k$ elements to restore their order at the front, and finally reverse the remaining $n-k$ elements. This achieves $O(n)$ time with $O(1)$ extra space.
