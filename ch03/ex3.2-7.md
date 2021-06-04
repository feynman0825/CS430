prove F(i) = (x^i - y^i)/sqrt(5).
when i = 0, F(0) = 0, and the Fibonacci(0) = 0, so F(0) is correct.
when i = 1, F(0) = 1, and the Fibonacci(1) = 1, so F(1) is correct.

if F(n) is correct for all x <= i, we prove Fibonacci(i+1) = F(i) + F(i-1)
                                                           = (x^i - y^i)/sqrt(5) + (x^(i-1) - y^(i-1))/sqrt(5)
                                                           = ((x+1)*x^(i-1) - (y+1)*y^(i-1))/sqrt(5)
                                                           = ((x^2) * x^(i-1) - (y^2) * y^(i-1))/sqrt(5)
                                                           = F(i+1).
