1. lg(lg*(n))                     ==>   2^(lg(lg*(n))) = lg*(n)
2. lg*(lg(n)) >= lg*(n) - 1       ==>   2^(lg*(n) -1 ) >= 2^(lg*(n) - 1) = 1/2 * 2^lg*(n)
   according to  3.10  lg*(n) / (1/2 * 2^lg*(n)) tend to be 0.
   so (1/2 * 2^lg*(n)) > lg*(n)   ==>  2^(lg*(n) -1 ) > 2^(lg(lg*(n)))
                                  ==>  2^(lg*(lg(n))) > 2^(lg(lg*(n)))
                                  ==>  lg*(lg(n)) > lg(lg*(n))
