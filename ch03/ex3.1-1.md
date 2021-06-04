因为f(n)是asymptotically nonnegative function，如果假设n>=n1时，所有的f(n) >= 0; 同理，假设n>=n2时，所有的g(x) >= 0;
那么当n>=max(n1, n2)时， 0 =< max(f(n),g(n)) =< f(n) + g(n) =< 2*max(f(n),g(n))。
即存在c1 = 1, c2 = 2, n0 = max(n1, n2)，满足Theta定义，故f(n)+g(n) = Theta(max(f(n), g(n)))。


因为f(n)是asymptotically nonnegative function，如果假设n>=n1时，所有的f(n) >= 0; 同理，假设n>=n2时，所有的g(x) >= 0;
那么当n>=max(n1, n2)时， 0 =< 1/2*(f(n)+g(n)) =< max(f(n),g(n)) =< f(n) + g(n);
即存在c1 = 1/2, c2 = 1, n0 = max(n1, n2)，满足Theta定义，故max(f(n),g(n) = Theta(f(n) + g(n))。
