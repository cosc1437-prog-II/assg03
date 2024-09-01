---
name: 'Task 2: Sum Range of Decreasing Step Size'
about: Task 2 for Students
title: 'Task 2: Sum Range of Decreasing Step Size'
labels: enhancement
assignees: ''

---

Implement code in the `sumRangeDecreasing()` function to sum up and
return the values in the range from `begin` to `end`, only adding
subsequent values according to the `step` size.  This task differs
from the previous one in that the `step` size will be negative and you
will step down the range from high value in begin to low value in end.
You need to define a `while` loop and correctly specify the loop
termination condition for this task.

You need to do the following:

1. Define two local variables, both of type `int`.  Call the first `sum` and the
   second `current`. 
   - Initialize `sum` to 0, this will hold the running sum you will calculate and return.
   - Initialize `current` to be the `begin` value that is passed into this function
     as the first parameter.
2.  Create a while loop.  Lets use for example the first case where `begin=1`,
    `end=5` and `step=1`.  You should have initialized your `sum` to 0 and your
	`current` should be set to 1, which was passed in as the beginning value of the
	range.
    - Inside of the loop you should add the `current` value into the running sum. 
	  So the first time in the loop, when sum is 0 and current is 1, the result put
	  back into sum should be 1.
	- After you add the `current` value into the `sum`, increase `current`
	  by the step size.  Do this by adding `step` to `current` and assigning the result
	  back into `current`.
	- The only difference from the previous function is that, we are adding decreasing
	  values, so you should be checking that `current` is greater than or equal to the
	  `end` of the range now.
3. Initially the stub function given to you always returns 0.   You should instead
   return the `sum` you calculate after your loop exits.

**Suggested Solution**


**Additional Requirements**

- You are requied to use exactly the same code as you created in the previous
  task.  The only thing that should change will be the loop control condition
  test for when to exit your loop.
- The `sum` and `current` local variables are required to be of type `int`
  for this function to work.
- You are required to use a `while` loop control structure in this task.
  You cannot use any other looping construct.
- You are required to define the `current` local variable and keep it updated
  to be the current term to be added to the running sum.
- You are required to specify the loop termination condition as described, by
  testing if `current` is greater than or equal to the `end` of the range.
- The function will not pass tests unless you return the `sum` at the bottom,
  after the loop terminates.
