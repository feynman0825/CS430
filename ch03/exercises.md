### 3.1-1

Given:

0 <= c1 * h(n) <= f(n) <= c2 * h(n), for all n >= n0
0 <= d1 * k(n) <= g(n) <= d2 * k(n), for all n >= n1

Then:

0 <= c1 * h(n) + d1 * k(n) <= f(n) + g(n) <= c2 * h(n) + d2 * k(n), for all n >= max(n0, n1)

0 <= max(c1 * h(n),d1 * k(n)) <= f(n) + g(n) <= max(c2 * h(n), d2 * k(n)), for all n>= max(n0, n1)

0 <= max(c1 * h(n),d1 * k(n)) <= max(f(n), g(n)) <= max(c2 * h(n), d2 * k(n)), for all n>= max(n0, n1)

So:

max(f(n), g(n)) = Theta(f(n), g(n))


### 3.1-2

(n+a)^b = n^b + Theta(n^(b-1)) = Theta(n^b)

### 3.1-3

O(n^2) means 0 <= f(n) <= c2 * g(n), for all n >= n0

It's the upper bound, so it doesn't make any sense to state that A has a lower bound which is higher than the upper bound.

### 3.1-4

2^(n+1) = 2 * 2^n = O(2^n)

### 3.1-5

Directly from the definition.

### 3.1-8

O(g(n,m)) = {f(n,m): exist c, n0, m0, such that 0 <= f(n,m) <= c * g(n,m) 
	     for all n >= n0, m >= m0}

Omega(g(n,m)) = {f(n,m): exist c, n0, m0, such that 0 <= c * g(n,m) <= f(n,m) 
	     for all n >= n0, m >= m0}

Theta(g(n,m)) = {f(n,m): exist c0, c1, n0, m0, such that 0 <= c0 * g(n,m) <= f(n,m) <= c1 * g(n,m) 
	     for all n >= n0, m >= m0}
