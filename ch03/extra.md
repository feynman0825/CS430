1. f(n) = theta(g(n)) if and only if g(n) = theta(f(n).   (TODO prove this)
2. if f(n) = theta(g(n)) and g(n) = theta(h(n)) then f(n) = theta(h(n).  (TODO prove this)
3. f(n) = theta(f(n))

4. if f(n) = theta(g(n)), then a*f(n) = theta(g(n)) if a > 0.
   there exists c1>0, c2>0, and n0, so that when n>=n0   0 =< c1*g(n) =< f(n) <= c2*g(n)
                                                    ==>  0 =< a*c1*g(n) =< a*f(n) =< a*c2*g(n)
   a*c1>0, a*c2>0, so a*f(n) = theta(g(n))

5. if f(n) = theta(g(n)), then f(n) = theta(a*g(n)) if a > 0.
   there exists c1>0, c2>0, and n0, so that when n>=n0   0 =< c1*g(n) =< f(n) <= c2*g(n)
   we let newC1 = c1/a > 0, newC2 = c2/a >0,        ==>  0 =< newC1*a*g(n) =< f(n) =< newC2*a*g(n)
   so f(n) = theta(a*g(n))

6. if f(n) = W(g(n)), g(n) = w(h(n)) then f(n) = w(h(n)).
   there exists c1>0, and n0>0, so that when n>=n0   0 =< c1*g(n) =< f(n).
   so for any c>0, we can choose a c2 = c/c1, because g(n) = w(h(n)), this exist n1, when n>=n1, g(n) > c2* h(n) >= 0.
   that mean f(n) > c1 * c2 * h(n) >= 0 ==> f(n) > c1*(c/c1)*h(n) >= 0
                                        ==> f(n) > c*h(n) >= 0

7. if f(n) = w(g(n)), g(n) = W(h(n)) then f(n) = w(h(n)).
   because g(n)=W(h(n)), there exists a c1>0, n0>0, so that when n>=n0   0 =< c1*h(n) =< g(n).
   because f(n)=w(g(n)), for any c2>0, we have a n1, when n>=n1, 0 =< c2*g(n) < f(n).
   for any c>0, we let c2= c/c1>0, so 0 =< c1 * c2 * h(n) < f(n) when n>=max(n0,n1).
   0 <= c1 * (c/c1) * h(n) < f(n)  ==>  0 =< c*h(n) < f(n)


8. if f(n) = O(g(n)), g(n) = o(h(n)) then f(n) = o(h(n)).
   there exists c1>0, and n0>0, so that when n>=n0   0 =< f(n) <= c1 * g(n).
   so for any c>0, we can choose a c2 = c/c1, because g(n) = o(h(n)), this exist n1, when n>=n1, 0 =< g(n) < c2* h(n).
   that mean 0 =< f(n) < c1 * c2 * h(n) ==> 0 <= f(n) < c1*(c/c1)*h(n)
                                        ==> 0 <= f(n) < c*h(n)

9. if f(n) = o(g(n)), g(n) = O(h(n)) then f(n) = o(h(n)).
   because g(n)=O(h(n)), there exists a c1>0, n0>0, so that when n>=n0   0 =< g(n) =< c1*h(n).
   because f(n)=o(g(n)), for any c2>0, we have a n1, when n>=n1, 0 =< f(n) < c2*g(n).
   for any c>0, we let c2= c/c1>0, so 0 =< f(n) < c1 * c2 * h(n)  when n>=max(n0,n1).
   0 <= c1 * (c/c1) * h(n) < f(n)  ==>  0 =< c*h(n) < f(n)

10, due to f(n) = theta(g(n)) imply f(n) = O(g(n)) and f(n) = W(g(n)), so 6,7,8,9 also apply to theta.

11. if f(n) = O(g(n)), p(n) = O(q(n)  then f(n)*p(n) = O(g(n)*q(n)).
    exist c1>0, n1>0, 0 =< f(n) =< c1*g(n) when n>=n1
    exist c2>0, n2>0, 0 =< p(n) =< c2*q(n) when n>=n2
    so 0 =< f(n)*p(n) =< c1*c2*g(n)*q(n) when n >= max(n1,n2)

12. if f(n) = W(g(n)), p(n) = W(q(n)  then f(n)*p(n) = W(g(n)*q(n)).
    exist c1>0, n1>0, 0 =< c1*g(n) =< f(n) when n>=n1
    exist c2>0, n2>0, 0 =< c2*q(n) =< p(n) when n>=n2
    so 0 =< c1*c2*g(n)*q(n) =< f(n)*p(n) when n >= max(n1,n2)

13. because of 11 and 12, we know f(n)=theta(g(n)), p(n)=theta(q(n)), then f(n)*p(n) = theta(g(n)*q(n)).

14. if f(n) = o(g(n)), p(n) = O(q(n)  then f(n)*p(n) = o(g(n)*q(n)).
    exist c2>0, n2>0, 0 =< p(n) =< c2*q(n) when n>=n2
    for any c>0, we can take c1 = c/c2 > 0, there exists n1, 0 =< f(n) < c1*g(n) when n>n1
    so 0 =< f(n)*p(n) < c1 * c2 * g(n) * q(n) ==> 0 =< f(n)*p(n) < c*g(n)*q(n) when n >= max(n1,n2)

15. if f(n) = W(g(n)), p(n) = w(q(n)  then f(n)*p(n) = w(g(n)*q(n)).
    exist c2>0, n2>0, 0 =< c2*g(n) =< f(n)  when n>=n2
    for any c>0, we can take c1 = c/c2 > 0, there exists n1, 0 =< c1*q(n) < p(n) when n>n1
    so 0 =< c1 * c2 * g(n) * q(n) < f(n)*p(n) ==> 0 =< c*g(n)*q(n) < f(n)*p(n) when n >= max(n1,n2)

16. ceil(f(n)) = theta(f(n)) if exist n0, when n>=n0, f(n) >= 1.
    when c1 = 1, for all n>0   0 =< c1*f(n) =< ceil(f(n)).
    ceil(f(n)) < f(n) + 1  ==> 0 =< ceil(f(n)) < c2*f(n)    when c2 = 2 and n>=n0

17. floor(f(n)) = theta(f(n)) if exist n0, when n>=n0, f(n) >= 2.
    when c1 = 1, for all n>0   0 =< floor(f(n)) =< c1*f(n).
    f(n) - 1 < floor(n)  ==>   0 =< f(n) - f(n)/2 < floor(f(n))    when n>=n0
                         ==>   0 =< f(n)/2 < floor(f(n))

18. lg(ceil(f(n))) = theta(lg(f(n))) when n>=n0, f(n)^2 >= f(n) + 1.
    0 =< lg(f(n)) =< lg(ceil(f(n)))
    0 =< lg(ceil(f(n))) =< lg(f(n) + 1) =< lg(f(n)^2) = 2lg(f(n))

19. if f(n) = O(g(n)), g(n) is monotonically increasing and limit g(n) = infinity, then lg(f(n)) = O(lg(g(n)))
    exist c>0 n0,  0 =< f(n) <= c*g(n) when n >= n0
    because lg is monotonically increasing function, 0 =< lg(f(n)) =< lg(c*g(n)) = lg(c) + lg(g(n))
    1. if c =< 1, then lg(c) <= 0, so 0 =< lg(f(n)) =< lg(g(n))
    2. if c > 1, then lg(c) > 0, we can choose n1, lg(c)*lg(g(n)) >= lg(c) when n>=n1, so lg(f(x)) =< (lg(c) + 1)*lg(g(n))  when n >= max(n0, n1).
    that is lg(f(n)) = O(lg(g(n))

20. if f(n) = W(g(n)), g(n) is monotonically increasing and limit g(n) = infinity, then lg(f(n)) = W(lg(g(n)))
    exist c>0 n0,  0 =< c*g(n) =< f(n) when n >= n0
    because lg is monotonically increasing function, 0 =< lg(c*g(n)) = lg(c) + lg(g(n)) =< lg(f(n))
    1. if c>=1, then lg(c) >= 0, so 0 < lg(g(n)) = lg(f(n))
    2. if c<1, then lg(c) < 0, lg(c) + lg(g(n)) = lg(c) + 1/2*lg(g(n)) + 1/2*lg(g(n)), we can choose n1, lg(c) + 1/2*lg(g(n)) >= 0 when n>=n1, so 0 =< 1/2*lg(g(n)) < lg(f(n)) when n >= max(n0,n1).
    that is lg(f(n)) = W(lg(g(n))
