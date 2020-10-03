## Approach
Each plant must contain less or equal amount of chemical fertilizer than the plant to it's left in order to survive. Maintain a stack where every element on the stack contains the following information about a plant:  
* the amount of chemical fertilizer contained in the plant
* the number of days that have passed.  

Initially, push **{CF[0], 0}** onto the stack, where **CF[i]** is the amount of chemical fertilizer contained in the *i*-th plant.

Then iterate over the plants from left to right. Suppose that the *i*-th plant is now being considered. If the stack isn't empty, pop the top element from the stack and compare it with **CF[i]**.
* If **CF[i]** is greater than this value, then the *i*-th plant will die on the first day. So add **{CF[i], 1}** to the stack.
* Otherwise, pop as long as the value in the top of the stack is greater than or equal to **CF[i]**. Update the answer with the second integer of the pair pushed onto the stack. If the stack becomes empty then add **{CF[i], 0}** to the stack otherwise add **{CF[i], cur_date+1}**.  