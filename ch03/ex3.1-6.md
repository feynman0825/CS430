如果一个算法的运行时间是f(n)=Theta(g(n)), 那么根据Theta定义，存在正数c1, c2, n0, 对于所有n>=n0, 0 =< c1*g(n) =< f(n) =< c2*g(n)。
因为0 =< f(n) =< c2*g(n)，c2*g(n)是最大值，所以是其worst-case运行时间，而此不等式即f(n) = O(g(n))的定义。
因为0 =< c1*g(n) =< f(n)，c1*g(n)是最小值，所以是其best-case运行时间，而此不等式即f(n) = W(g(n))的定义。
故一半得证。

如果算法的worst-case运行时间是O(g(n))，则存在c2,n2, 使算法全部运行时间满足 0 =< f(n) =< c2*g(n)   for all n>=n2
如果算法的best-case 运行时间是W(g(n))，则存在c1,n1, 使算法全部运行时间满足 0 =< c1*g(n) =< f(n) for all n>=n1
综上,当n>=max(n1,n2)时，算法全部运行时间满足 0 =< c1*g(n) =< f(n) =< c2*g(n),即算法运行时间f(n)=Theta(g(n))
