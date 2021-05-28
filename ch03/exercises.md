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


### 3.2-2

a^logb(c) 
=c^(logc(a^logb(c)))
=c^(logb(c) * logc(a))
=c^(logb(c) * logb(a)/logb(c))
=c^(logb(a))


### 3.2-3

lg(n!)  = lg(sqrt(2 * pi * n) * (n/e)^n * e^alpha_n)
        = const + 1/2 * lg(n) + n * lg(n/e) + alpha_n * lg(e)
        = const + 1/2 * lg(n) + n * (lg(n)-lg(e)) + alpha_n * lg(e)
        = const + O(lg(n)) + O(n * lg(n)) + O(1/n)
        = O(n * lg(n))


n!      = 1 * 2 * ... * n
	>= 1 * 2 * ... * 2 
	>= 1 * 2^(n-1)
	= w(2^n)

n!	= 1 * 2 * ... * n
	<= n * n * ... * n
	<= n^n
	= o(n^n)

### 3.2-4 (unsolved)
ceil(lgn)! < sqrt(2 * pi * ceil(lgn)) * (ceil(lgn)/e)^n * e^alpha_n
	   < sqrt(2 * pi * (1+lgn)) * ((1+lgn)/e)^n * e^alpha_n
	   < const * (1+lgn) * (1+lgn)^n/e^n * e^alpha_n
	   < const * ((1+lgn)/e)^(n+1) * O(1/n)
	   < const * (k * lgn)^(n+1) * o(1/n) for some k

### 3.2-5 (unsolved)

### 3.2-6

just use phi = (-b +- sqrt(b^2-4ac))/2a

### 3.2-7

n = 1, F1 = 1

for n >= 2:
   let F(n) = (a^n-b^n)/sqrt(5), a and b stand for the two solutions

   then F(n+1)  = F(n) + F(n-1)
	        = (a^n-b^n)/sqrt(5) + (a^(n-1)-b^(n-1))/sqrt(5)
		= (a^(n+1) * (1/a + 1/a^2) - b^(n+1) * (1/b + 1/b^2))/sqrt(5)
   because 1/a + 1/a^2 = 1/b + 1/b^2 = 1
   so   F(n+1) = (a^(n+1) - b^(n+1))/sqrt(5)

Q.E.D

### 3.2-8




