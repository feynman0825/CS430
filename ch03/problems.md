### 3-1

### 3-2

   O o W w 0
a: Y Y N N N
b: Y Y N N N
c: N N N N N
d: N N Y N Y
e: Y N Y N Y
f: Y Y N N N

### 3-3

W(1) < W(lnlnn) < W(sqrt(lgn)) < W(lnn) < W((lgn)^2) < W(sqrt(2)^lgn) < W(n) = W(2^lgn) < W(lg(n!)) < W(nlgn) < W(n^2) < W(n^3) < W((3/2)^n) < W(2^n) < W(e^n) < W(n * 2^n) < W(2^(2^n)) = W(2^(2^(n+1)))


0(2^(2^n)) = 0(2^(2^(n+1)))

### 3-4

a. True

b. False. 

f(n) = n, g(n) = n^2, 0(min(f(n), g(n))) = 0(n), but 0(n+n^2) = 0(n^2)

c. False
   0 <= f(n) <= c * g(n), for all n >= n0
   0 <= lgf(n) <= lg(c * g(n)), for all n >= n0
   0 <= lgf(n) <= lg(c) + lgg(n), for all n >= n0
so this is inconsistent with the definition of O(lg(fn))

d. False ? 
   0 <= f(n) <= c * g(n), for all n >= n0
   0 <= 2^f(n) <= 2^(c * g(n)), for all n >= n0
?  0 <= 2^f(n) <= d(c) * 2^g(n), for all n >= n0

e. False

f(n) = n^0.5


