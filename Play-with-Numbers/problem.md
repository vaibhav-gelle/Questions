## Problem
There are three integers **X**, **Y**, and **Z**, which are the upper bounds of the number of 4s, 5s and 6s in a number repectively. It means that X tells that there can be at most X 4s in a number, Y tells that there can be at most Y 5s in a number and similarly, Z tells that there can be at most Z 6s in a number.  
The task is to find the sum of all such numbers.  
So, for example, if we have X = 1, Y = 1 and Z = 0, that means we can have the following numbers: 
* 4 - One 4 and Zero 5 and Zero 6
* 5 - Zero 4 and One 5 and Zero 6
* 45, 54 - One 4 and One 5 and Zero 6

**Note :**  Output the sum modulo 10<sup>9</sup>+7.

## Your Task:
You don't need to read input or print anything. Complete the function `getSum()` which takes X, Y and Z as input parameters and returns the integer value

**Expected Time Complexity :** `O(X*Y*Z)`  
**Expected Auxiliary Space :** `O(X*Y*Z)`

## Constraints
0 ≤ X, Y, Z ≤ 60

## Input
First and the only line of the input has 3 space seperated integers denoting **X**, **Y** and **Z**.

## Output
Return the sum of all such numbers modulo 10<sup>9</sup>+7.