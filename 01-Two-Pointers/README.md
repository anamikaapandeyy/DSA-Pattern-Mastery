# Pattern: Two Pointers

### Logic
The Two Pointers pattern utilizes two indices (pointers) to iterate through a data structure—typically an array or string—until specific conditions are met. These pointers are **dynamic variables** that move according to the problem's requirements. The movement typically follows one of three strategies:

*   **Convergent:** Pointers start at opposite ends and move **towards** each other (e.g., meeting in the middle for Palindromes or Sorted Sums).
*   **Divergent:** Pointers start at the same position and move **away** from each other (e.g., expanding from a center to find the longest palindromic substring).
*   **Parallel:** Both pointers move in the **same direction** but at different speeds or intervals (e.g., partitioning, removing duplicates, or sliding window foundations).

### Identification
This pattern is most effective when the problem involves:
*   **Sorted Input:** The input is sorted, making it ideal for search-related problems.
*   **Comparison:** Comparing elements at different positions to satisfy a specific condition.
*   **Searching:** Finding a **pair, triplet, or subarray** that meets a target sum or property.
*   **Partitioning:** Rearranging elements in-place based on a pivot or criteria (e.g., Move Zeroes).
*   **Palindromes/Reversing:** Dealing with symmetrical properties or reversing segments of data.
*   **Optimization:** Reducing a nested loop $O(N^2)$ approach to a linear $O(N)$ efficiency.

### Complexity Analysis
*   **Time Complexity:** Usually $O(N)$, as each element is processed at most a constant number of times.
*   **Space Complexity:** $O(1)$, as we only track index variables regardless of the input size.

---
*Status: In Progress*
