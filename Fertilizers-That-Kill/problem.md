## Problem
There are a number of plants in a garden. Each of these plants has been treated with some amount of chemical fertilizers. Chemical fertilzers can cause root burn which can kill the plants. So, after each day, if any plant has more chemical fertilizer than the plant on its left, being weaker than the left one, it dies.

You are given the initial values of the chemical fertilizer in each of the plants. Print the number of days after which no plant dies, i.e. the time after which there are no plants with more chemical fertilizer content than the plant to their left.

For example, chemical fertilizer levels ***cf = [3, 6, 2, 7, 5]***. Using a ***1-indexed*** array, on ***day 1*** plants ***2*** and ***4*** die leaving ***cf = [3, 2, 5]***. On ***day 2***, plant ***3*** of the current array dies leaving ***cf = [3, 2]***. As there is no plant with a higher concentration of chemical fertilizer than the one to its left, plants stop dying after ***day 2***.

## Function Description
Complete the function `livingDaysOfPlants()` in the editor below. It must return an integer representing the number of days until plants no longer die from chemical fertilizer.

`livingDaysOfPlants()` has the following parameter(s):

* `cf`: an array of integers representing chemical fertilizer levels in each plant

## Input Format

1. The first line contains an integer ***n***, the size of the array ***cf***.
2. The next line contains ***n*** space-separated integers ***cf[i]***.

## Constraints

* **1 ≤ n ≤ 10<sup>5</sup>**  
* **1 ≤ cf[i] ≤ 10<sup>9</sup>**

## Output Format

Output an integer equal to the number of days after which no plants die.