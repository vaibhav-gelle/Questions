## Approach
* As this problem has the property of [sub-problems overlapping](https://www.geeksforgeeks.org/overlapping-subproblems-property-in-dynamic-programming-dp-1/) and [optimal sub-structure](https://www.geeksforgeeks.org/optimal-substructure-property-in-dynamic-programming-dp-2/), hence [dynamic programming](http://www.geeksforgeeks.org/dynamic-programming/) can be used to solve it.  
* The numbers having exact `i 4s`, `j 5s` and `k 6s` for all `i < x`, `j < y`, `j < z` are required to get the sum required.
* Therefore the dp array `exactnum[i][j][k]` will store the exact count of numbers having exact `i 4s`, `j 5s` and `k 6s`.
* If `exactnum[i – 1][j][k]`, `exactnum[i][j – 1][k]` and `exactnum[i][j][k – 1]` are already known, then it can be observed that the **sum of these is the required answer**, **except** in the case when `exactnum[i – 1][j][k]`, `exactnum[i][j – 1][k]` or `exactnum[i][j][k – 1]` doesn’t exist. In that case, just skip it.
* `exactsum[i][j][k]` stores the sum of exact number having `i 4s`, `j 5s` and `k 6s` in the same way as:
    ```cpp
    exactsum[i][j][k] = 10 * (exactsum[i - 1][j][k] 
                            + exactsum[i][j - 1][k] 
                            + exactsum[i][j][k - 1]) 
                    + 4 * exactnum[i - 1][j][k] 
                    + 5 * exactnum[i][j - 1][k] 
                    + 6 * exactnum[i][j][k - 1] 
    ```