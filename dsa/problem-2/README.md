### Submission Link:
[Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/submissions/1910704587)

## Concept

Merges the two sorted arrays using a two-pointer sweep, building a single sorted array in $O(m+n)$ time. After merging, compute the median by checking whether the merged length is odd (middle element) or even (average of the two middle elements). Uses $O(m+n)$ extra space for the merged array.
