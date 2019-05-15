Samu is in super market and in a mood to do a lot of shopping. She needs to buy shirts, pants and shoes for herself and her family. There are N different shops. Each shop contains all these three items but at different prices. Now Samu has a strategy that she won't buy the same item from the current shop if she had already bought that item from the shop adjacent to the current shop.
Now Samu is confused, because although she want to follow her strategy strictly but at the same time she want to minimize the total money she spends on shopping. Being a good programmer, she asks for your help.

You are provided description about all N shops i.e costs of all three items in each shop. You need to help Samu find minimum money that she needs to spend such that she buys exactly one item from every shop.

Input Format: 
First line contain number of test cases T. Each test case in its first line contain N denoting the number of shops in Super Market. Then each of next N lines contains three space separated integers denoting cost of shirts, pants and shoes in that particular shop.

Output Format:
For each test case, output the minimum cost of shopping taking the mentioned conditions into account in a separate line.

Constraints :
1 ≤ T ≤ 10 
1 ≤ N ≤ 105
Cost of each item (shirt/pant/shoe) does not exceed 104

SAMPLE INPUT 
1
3
1 50 50
50 50 50
1 50 50
SAMPLE OUTPUT 
52
Explanation
Sample Explanation

There are two ways, each one gives 52 as minimum cost. One way is buy shirt from first shop, pant from second shop and shirt from third shop or she can buy shirt from first shop, shoe from second shop and shirt from third shop. Both ways , cost comes up to 1 + 50 + 1 = 52

Time Limit:	5.0 sec(s) for each input file.
Memory Limit:	256 MB
Source Limit:	1024 KB
Marking Scheme:	Marks are awarded when all the testcases pass.
Allowed Languages:	Bash, C, C++, C++14, Clojure, C#, D, Erlang, F#, Go, Groovy, Haskell, Java, Java 8, JavaScript(Rhino), JavaScript(Node.js), Julia, Kotlin, Lisp, Lisp (SBCL), Lua, Objective-C, OCaml, Octave, Pascal, Perl, PHP, Python, Python 3, R(RScript), Racket, Ruby, Rust, Scala, Swift, Swift-4.1, TypeScript, Visual Basic
