# Recursion and Backtracking in Data Structures

- kaafi jaada use hone wala concept hai DS algo ka.

## Recursion

- any function which calls iteself is called recursive.
- a recursive method solves a problem by calling a copy of itself to work on smaller problem.
- it is important to ensure that the recursion terminates.
- Each time the function calls itself with a slightly simpler version of the original problem.

### Why recursion?

- recursive code is generally shorter and easier to write than iterative code.

### Recursion

- It terminates when a **base case** is reached.
- Each recursive call requires extra space on the stack frame(i.e. Memory).
- Solution to some problems are easier to formulate recursively.
- recursive method kaafi space consume karte hai, toh agar bohot zyada baar recursion ho raha hai toh yeh accha nahi hai.

---

### recursion part 2

### Backtracking

- it is the method of exhausted search using divide and conquer.
- sometimes the best algorithm for a problem is to try all possiblilities.
- this is always slow.

### Recursion problem

- tower of hanoi
- Factorial
- fibonacci series
- greatest common divisor
- printing all permutations of a given string
- generate all strings of n bits of binary digits.

medium problem on recursion

- define power function, which could handle negative powers.
- write a recursive function to print entered characters in reverse order(TNRN)
- write a recursive function to convert decimal to binary.
