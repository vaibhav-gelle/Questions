Performance = sum(speed) * min(efficiency). Idea is simple: try every efficiency value from highest to lowest and at the same time maintain an as-large-as-possible speed group(max size k), keep adding speed to total speed, if size of engineers group exceeds K, lay off the engineer with lowest speed.

Sort enineers based on efficiency with descending order. Because, afterwards, when we iterate whole engineers, every round, when calculating the current performance, minimum efficiency is the effiency of the new incoming engineer.
Maintain a priority queue(min heap) to track of the minimum speed in the group. If size of group is == K, kick the engineer with minimum speed out (since efficiency is fixed by new coming engineer, the only thing matters now is sum of speed).
Calculate/Update performance.
    
#### Example
6
2 10 3 1 5 8
5 4 3 9 7 2
3

After sorting persons based on descending order of efficeny, we get

speed =      [1,5,2,10,3,8]
efficeincy = [9,7,5,4,3,2]
k=3

If 9 is minimum effieciency of the group
sum(speed)=1
Team Performance = 1*9=9

If 7 is minimum efficiency of group
sum(speed) = 5+1=6
Team Performance = 6*7=42

If 5 is minimum effieciency of group,
sum(speed) = 2+5+1=8
Team Performance = 8*5=40

Now, notice k=3
So if 4 is minimum efieciency of group, we have to take top 3 speeds previously encountered, but condition is that we have to include speed of current engineer.
sum(speed) = 10+5+2=17
Team Performance = 17*4=68

In this way iterate over all persons and find max performance.

