# Tutorial For Dynamic Programming Begginer to Advance

1.  [Introduction]()
2.  [Recursion and Dynamic Programming](https://www.quora.com/What-is-the-difference-between-dynamic-programming-and-recursion)
3.  [Some examples with solution]()





## Introduction

Dynamic programming (usually referred to as DP ) is a very powerful technique to solve a particular class of problems. Dynamic programming amounts to breaking down an optimization problem into simpler sub-problems, and storing the solution to each sub-problem so that each sub-problem is only solved once.

There are two ways of doing this.

### 1.) Top-Down :
Start solving the given problem by breaking it down. If you see that the problem has been solved already, then just return the saved answer. If it has not been solved, solve it and save the answer. This is usually easy to think of and very intuitive. This is referred to as Memoization.

### 2.) Bottom-Up :
Analyze the problem and see the order in which the sub-problems are solved and start solving from the trivial subproblem, up towards the given problem. In this process, it is guaranteed that the subproblems are solved before solving the problem. This is referred to as Dynamic Programming.


### Fibbonaci Series :
Let's try to understand this by taking an example of Fibonacci numbers.

    Fibonacci (n) = 1; if n = 0
    Fibonacci (n) = 1; if n = 1
    Fibonacci (n) = Fibonacci(n-1) + Fibonacci(n-2)

So, the first few numbers in this series will be: 1, 1, 2, 3, 5, 8, 13, 21... and so on!

A code for it using pure recursion:

```cpp
    int fib (int n) {
        if (n < 2)
            return 1;
        return fib(n - 1) + fib(n - 2);
    }
```
[click for full code link]()

Using Dynamic Programming approach with memoization:
```cpp
    void fib () {
        fib_result[0] = 1;
        fib_result[1] = 1;
        for (int i = 2; i < n; ++i)
           fib_result[i] = fib_result[i - 1] + fib_result[i - 2];
    }
```
[click for full code link]()

## Program for Fibonacci numbers
### The Fibonacci numbers are the numbers in the following integer sequence.
    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..

In mathematical terms, the sequence Fn of Fibonacci numbers is defined by the recurrence relation
<img id="imageF" src="http://blog.innovsystems.com/sites/default/files/styles/blog_poster/public/post_image/fibonacci%20series.gif?itok=Z5C0WmIP"
     style="float: left; margin-right: 10px, height: 100px,disabled: true" />

##Related Problems:
1.  [Fun With Fibonacci, devskill](https://www.devskill.com/CodingProblems/ViewProblem/389)
2.  [DZY Loves Fibonacci Numbers, codeforces, codeforces](http://codeforces.com/problemset/problem/446/C)
3.  [Weasel does Xor on Tree, codeforces](https://www.C.com/SEPT17/problems/WEASELTX)
4.  [Longest Common Subsequence, codechef](https://www.codechef.com/problems/TLCS)
5.  [Longest Increasing Subsequence, codeforces](https://codeforces.com/problemset/problem/568/E)
6.  [LCIS, codeforces](https://codeforces.com/problemset/problem/10/D)
7.  [LCS Again, codeforces](https://codeforces.com/problemset/problem/578/D)
8.  [Gargari and Permutations, codeforces](https://codeforces.com/problemset/problem/463/D)
9.  [Beautiful Sequence, hackerearth](https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/beautiful-sequence/)
10. [CODEM2 - Problem2, spoj](https://www.spoj.com/problems/BAT2)
11. [CODEM3 - Problem3, spoj](https://www.spoj.com/problems/BAT3)
12. [CODEM4 - Problem4, spoj](https://www.spoj.com/problems/CODEM4/)
13. [CODEM5 - Problem5, spoj](https://www.spoj.com/problems/CODEM5/)
14. [BAT3 - BATMAN3, spoj](https://www.spoj.com/problems/BAT3/)
15. [BAT4 - BATMAN4, spoj](https://www.spoj.com/problems/BAT4/)
16. [AEROLITE - The Secret of an Aerolite, spoj](https://www.spoj.com/problems/AEROLITE/)
17. [AIRLINES - Jumbo Airlines, spoj](https://www.spoj.com/problems/AIRLINES/)
18. [ALWFACT - Allowed Factors](https://www.spoj.com/problems/ALWFACT/)
