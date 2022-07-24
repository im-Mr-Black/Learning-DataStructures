# Analysis of Algorithm

- an algorithm is the step by step instruction to solve a given problem.

## Analysis of algorithm

- the goal of analysis of algorithm is to compare algorithms mainly in terms of running time but also in terms of other factors(like memory , efforts, etc).
- time and space are the main aspects

### Rate of Growth

- the rate at which the running time increases as a function of input is called rate of growth.

### Types of analysis

- to analyse the given algorithm we need to know on what inputs the algorithm is taking less time and on what inputs the algorithm is taking huge time.
  - worst time
  - average time
  - best time

### Asymtotic notations

- for all the three cases we need to identify the upper and lower bounds.
- syntax of representations of bounds are:
  - Big-O notation
  - omega notation
  - theta notation

## Big-O Notation

- O(g(n))= {f(n): there exist positive constants c and n<sub>0</sub> such that 0<= f(n)<= c\*g(n) for all n >= n<sub>0</sub>}.
- The statements f(n) = O(g(n)) states only that g(n) is an upper bound on the value of f(n) for all n , n>=n<sub>0</sub>.
- big-O notation me agar hum kisi algorithm ko represent kar rahe hai toh woh upper bound ka function hai(yaani agar hum hamare curve ka function banate toh O(g(n)) me g(n) humare algo ke function ka upper bound hota, waise hi hum omega notation likhta hai woh humare algo function ke lower bound hota hai).

## Omega- Notation

- Omega(g(n)) = {f(n): there exist positive constants c and n<sub>0</sub> such that 0<= c\*g(n) <= f(n) for all n>=n<sub>0</sub>}
- the statement f(n) = Omega(g(n)) states only that g(n) is only a lower bound on the value of f(n) for all n,n>= n<sub>0</sub>.

## Theta Notation

- theta notation me dono omega aur Big-O ke curve ka use hota hai. Toh isme hum function ke upper aur lower bound dono ko consider karte hai.
- theta curve tabhi likha jaa sakta hai jab lower bound aur upper bound ki degree same ho(in other words g(n) upper aur lower bound me same hi hoga bas the constant that we multiply hi change hoga).
