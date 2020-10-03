Given a string `s` and an array of integers `cost` where `cost[i]` is the cost of deleting the `ith` character in `s.`

Print the minimum cost of deletions such that there are no two identical letters next to each other.

Notice that you will delete the chosen characters at the same time, in other words, after deleting a character, the costs of deleting other characters will not change.

#### Constraints
`s.length == cost.length`

`1 <= s.length, cost.length <= 10^5`

`1 <= cost[i] <= 10^4`

`s contains only lowercase English letters.`

#### Input Format
* String `s`
* array of integers `cost`
   
#### Output 
* Print the minimum cost of deletions such that there are no two identical letters next to each other.

##### Sample Input 1
abaac

1 2 3 4 5
###### Sample Output 1
3
###### Explanation 1
Delete the letter "a" with cost 3 to get "abac" (String without two identical letters next to each other).


##### Sample Input 2
abc

1 2 3
###### Sample Output 2
0
###### Explanation 2
You don't need to delete any character because there are no identical letters next to each other.
