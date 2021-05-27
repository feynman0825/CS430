### 2.2-1

solution: O(n^3)

### 2.2-2

solution: 

**Best-case**: Provided a sorted array, there is nothing to be swapped, but it is still necessary to sweep the array and have a comparation with the previous element. So, O(n)

**Worst-case**: Given a reverse sorted array, every element in the loop will be inserted to the head of the array, then shift the rest of the array. That is, 1 + 2 + ... + n-1 for the comparation operator in each loop. So, O(n^2) for worst case.
