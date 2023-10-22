# GREEDY ALGORITHMS

## What is greedy algorithms?
Greedy algorithms make locally optimal choices at each step with the hope of eventually reaching.\ This is achieved by the following points.
For an Algorithm to be classified as "Greedy":

1. It has optimal sub-structure. Optimal solution to the problem contains optimal solutions to the sub-problems.

2. It has the GREEDY property. If we make a choive that seems like the best at the moment and proceed to solve the remaining sub-problems, we reach the optimal solution. We will never have to reconcider our previous choices.

Examples:
1. Example_1: Coins and targerts. This is an Example where Greedy does'nt work. Here take the input:
    number of coins:3  Target: 6
    Coins: 4, 3, 1

    Given Answer: 4, 1, 1
    Correct Answer: 3, 3.

2. Example_2: Load Balancing.
