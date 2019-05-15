https://www.hackerearth.com/problem/algorithm/moving-to-new-office-dd532d09/

Ad-optimization team is moving to their new office Safina Towers :) . But the problem is Safina towers don't have furniture, but you have wood-sheet. You are given a wood-sheet of length L . Since everyone wants to create their desk in their own style you have to give them some amount of wood. So, you are given N mark-down points (since ad-optimization team have n members) from that points you have to cut the wood sheet. But the problem is wood-cutter will cost (X * left) + (Y * right) for cutting the wood (where left and right is the size of the remaining parts of the wood after cutting). For example you want to cut a wood sheet of length 10 and X=3 and Y=4 and you want to cut at point 7 then left segment size = (7-1) =6 and right segment size = (10-7) = 3 then wood cutter will cost 3 * 6+4 * 3 = 30 .

As Amazonian you have to follow frugality leadership principal, you want to give wood cutter a minimum amount of money and want to cut wood-sheet from every marking point between 1 to L (exclusive ) . please note that in all the test case first mark point=1 and last mark point = size of sheet (L). Please output minimum amount of money needed for every test case.

Input Format: T: number of test cases (1<=T<=5) For each test case:

first line contains X and Y.(X: multiplier for left segment ,Y : multiplier for right segment) 2<=X<=100 2<=Y<=100

Second line Contains N: Number of marking points (2<=N<=100)

Third line contains marking point : m(0),m(1) ..... , m(n-1) marking points on wood sheet ,where m(0)=1 and m(n-1) = L where 2<=L<=200000

Output : For each test case : Minimum amount of money you have to pay to wood cutter. Each test case answer must be printed on a new line

SAMPLE INPUT 
1
3 4
6
1 3 5 9 16 22
SAMPLE OUTPUT 
163
Explanation
Explanation : Best Scenario: Frist cut at point 9 : cost = 3 * (9-1)+4 * (22-9) = 24 + 52 = 76 Second cut at point 5 : cost = 3 * (5-1)+ 4 * (9-5) = 12 + 16 = 28 Third cut at point 3 : cost = 3 * (3-1) + 4 * (5-3) = 6+ 8 = 14 Fourth cut at point 16 : cost = 3 * (16-9) + 4 * (22-16) = 21+ 24 = 45 Total Cost : 163

Second Scenario : First cut at point 3 : cost = 3 * (3-1)+4 * (22-3) = 6+76 = 82 Second cut at point 9 : cost = 3 * (9-3)+4 * (22-9) = 18+52 = 70 Third cut at point 5 : cost = 3 * (5-3)+4 * (9-5) = 6+16 = 22 Fourth cut at point 16 : cost = 3 * (16-9)+4 * (22-16) = 21 + 24 = 45 Total Cost : 219

Time Limit:	5.0 sec(s) for each input file.
Memory Limit:	256 MB
Source Limit:	1024 KB
Marking Scheme:	Marks are awarded when all the testcases pass.
Allowed Languages:	Bash, C, C++, C++14, Clojure, C#, D, Erlang, F#, Go, Groovy, Haskell, Java, Java 8, JavaScript(Rhino), JavaScript(Node.js), Julia, Kotlin, Lisp, Lisp (SBCL), Lua, Objective-C, OCaml, Octave, Pascal, Perl, PHP, Python, Python 3, R(RScript), Racket, Ruby, Rust, Scala, Swift, Swift-4.1, TypeScript, Visual Basic
