### 6.1-1

2^(h+1), 2^h

### 6.1-2

h-1 < lgn <= h

h < lgn + 1, h >=lgn

=> h = floor(lgn)

### 6.1-3

PARENT[i] > CHILDREN[i]

### 6.1-4

if n = 2^k-1 then A[n] or A[n-1]
else A[n]

### 6.1-5

NO

### 6.1-6

NO, A[4] < A[9]

A[n] or A[n-1]

### 6.1-7

Find the first node without left leaf

2i > n
i > n/2
i = floor(n/2) + 1

### 6.2-1

3 <-> 10
10 <-> 9

### 6.2-3

Return original A

### 6.2-4

largest = i

return original A

### 6.2-6

Worst case: walk through height of the heap, which is lgn.

### 6.3-2

Make sure sub-tree is ordered.

### 6.4-1

5  13 2  25 7  17 20 8  4
25 20 17 13 8  7  5  4  2
20 17 13 8  7  5  4  2  25
...

### 6.4-3

nlgn, because BUILD_MAX_HEAP still needs to sweep the whole array, and MAX_HEAPIFY still needs to walk through the height of tree every single time.

### 6.4-4

BUILD-MAX-HEAP ->     0(n)
n-1 MAX_HEAPIFY ->    sum_i(lgi) = lg(N!)
                                 = lg(sqrt(2*pi)*n^(n+0.5)*e^(-n))
                                 >= nlgn
                      W(nlgn)
Total cose -> W(nlgn)



