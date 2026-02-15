### Submission Link:
[Single Number II](https://leetcode.com/problems/single-number-ii/submissions/1910714234)

## Concept

Track element counts with a map. As each number is processed, its count is incremented; once a count reaches 3, that key is removed. Since all other elements appear exactly three times, the map ends with only the number that appears once, which is returned. This runs in $O(n \log n)$ time due to map operations and uses $O(k)$ space for distinct elements.
