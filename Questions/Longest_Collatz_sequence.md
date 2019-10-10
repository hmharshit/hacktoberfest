# Longest Collatz sequence

## Problem

    The following iterative sequence is defined for the set of positive integers:
                    n → n/2       n is even**
                    n → 3n + 1    n is odd
    Using the same rule above and starting with 13, we generate the following sequence:
            13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
    it can be seen that this sequence (starting at 13 and finishing at 1) contains ten terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, &#8804; N produces the longest chain? If many possible such numbers are there print the maximum one.

**Note:** Once the chain starts the terms are allowed to go above N.

### Input Format

    The first line contains an integer T , i.e., number of test cases.
    Next T lines will contain an integer N.

### Constraints

- 1 &#8804; T &#8804; 10<sup>4</sup>
- 1 &#8804; N &#8804; 5 &#215; 10 <sup>6</sup>

### Output Format

    Print the values corresponding to each test case.

### Sample Input

    3
    10
    15
    20

### Sample Output

    9
    9
    19

### Explanation

Collatz sequence for n = 9 is,
&nbsp;

9 → 28 → 14 → 7 → 22 → 11 → 34 → 17 → 52 → 26 → 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

containing **19** steps and is the longest for n &#8804;10
