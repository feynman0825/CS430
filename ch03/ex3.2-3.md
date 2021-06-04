1. Prove n! = o(n^n)
   According to the Stirling’s approximation, n! = sqrt(2*pi*n) * (n/e)^n * (1 + theta(1/n)).
   the define of theta(1/n) say that: exist c1 and n1, so the function in theta(1/n) satisfy <= c1/n when n>= n1, so theta(1/n) <= c1/n1 when n >= n1, it's a constant.
   if constant1 = sqrt(2*pi), constant2 = (1+c1/n1), constant3 = constant1 * constant2,  we know n! <= constant1 * sqrt(n) * (n/e)^n * constant2 = constant3 * sqrt(n) * (n/e)^n;  (when n >= n1).
   for an random chosen c, if constant3 * sqrt(n) * (n/e)^n < c*n^n, that mean (constant3 * n^(1/2) * (n/e)^n) / (c*n^n) < 1, if constant4 = c/constant3, we have n^(1/2) / (e^n) < constant4.

   because constant4 = c/constant3 = c / ((sqrt(2*pi) * (1 + c1/n1)) and c > 0, c1 > 0, n1 >0, so constant4 > 0.
   from 3.10 we know that n2 must exist. so when n0 = max(n1, n2) and n > n0, the random chosen c will satisfy n! < c*n^n.

2. Prove n! = w(2^n)
   According to the Stirling’s approximation, n! = sqrt(2*pi*n) * (n/e)^n * (1 + theta(1/n)).
   the define of theta(1/n) say that: exist c1 and n1, so the function in theta(1/n) satisfy >= c1/n when n>= n1, so theta(1/n) >= c1/n when n >= n1. because c1 > 0 and n1 > 0, so theta(1/n) > 0.
   we obtain n! > sqrt(2*pi) * sqrt(n) * (n/e)^n   when n>=n1.
   if we let n > 2e, we have sqrt(2*pi) * sqrt(n) * (n/e)^n > sqrt(2*pi) * sqrt(n) * 2^n.
   for an random chosen c, if we let sqrt(2*pi) * sqrt(n) > c, we end with sqrt(2*pi) * sqrt(n) * 2^n > c*2^n.
   so, when n > max(n1, 2e, (c^2)/(2*pi)), n! > c * 2^n

3. Prove lg(n!) = theta(nlgn)
   According to the Stirling’s approximation, n! = sqrt(2*pi*n) * (n/e)^n * (1 + theta(1/n)).
   when prove n! = o(n^n), we known exist c1 and n1, when n>=n1, theta(1/n) <= c1/n1.
   lg(n!) = nlgn + (1/2)*lgn - n*lge + (1/2)*lg(2*pi) + lg(1+theta(1/n)) <= nlgn + (1/2)*lgn - n*lge + (1/2)*lg(2*pi) + lg(1 + c1/n1).
   let constant1 = (1/2)*lg(2*pi) + lg(1 + c1/n1).                        = nlgn + ((1/2)*lgn - n*lge) + constant1.
                                                                          = nlgn + lg(sqrt(n)) - lg(e^n) + constant1.
                                                                          = nlgn + lg(n^(1/2) * constant1 / e^n)
   from 3.10, there must some n2, when n > n2, n^(1/2) * constant1 / e^n < 1, so lg(n^(1/2) * constant1 / e^n) < 0.
   so if c1 = 1, when n >= max(n1,n2), n! <= c1*nlgn

   Another Direction.
   when prove n! = w(2^n), we known exist c2 and n3, theta(1/n) > 0 when n >= n3, so lg(1+theta(1/n)) > 0 when n >= n3.
   lg(n!) = nlgn + (1/2)*lgn - n*lge + (1/2)*lg(2*pi) + lg(1+theta(1/n)) > nlgn + (1/2)*lgn - n*lge + (1/2)*lg(2*pi)
                                                                         = nlgn + (1/2)*lgn - n*lge + constant1
                                                                         = nlgn(1 + 1/2n - lge/lgn + constant1/nlgn)
   we must check whether (1 + 1/2n -lge/lgn + constant1/(nlgn)) > 0 is possible. when n >= e, lge/lgn <= 1, so 1-lge/lgn >= 0, because 1/2n + constant1/(nlgn) > 0.
   so when n >= e, exist c2 = (1 -lge/lgn  + 1/2n + constant1/(nlgn)) > 0.
   so when n >= max(n3, e), there exist a c2>0, make n! > c2 * nlgn.

   we have known that there exist c1 and c2, when n >= max(n1,n2,n3,e)  c2*nlgn =< lg(n!) <= c1*nlgn, that is lg(n!) = theta(nlgn).
