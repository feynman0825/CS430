由big-O定义
f(n) = O(g(n)): 则存在正数c1,n1使得 0 =< f(n) <= c1*g(n)   (for all n>=n1)
由big-Omega定义
f(n) = W(g(n)): 则存在正数c2,n2使得 0 <= c2*g(n) =< f(n)   (for all n>=n2)
那么当n >= max(n1,n2)时，仍满足0 <= c2*g(n) =< f(n) <= c1*g(n), 即f(n)=Theta(g(n))


由Theta定义
f(n) = Theta(g(n)): 则存在正数c1,c2,n0,使得 0 =< c1*g(n) <= f(n) =< c2*g(n)   (for all n>=n0)
这满足big-O定义,故f(n) = O(g(n))。(其中c=c2)，也满足big-Omega定义。(其中c=c1)
