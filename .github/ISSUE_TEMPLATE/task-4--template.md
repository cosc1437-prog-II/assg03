---
name: 'Task 4: Sum Increasing Series'
about: Task 4 for Students
title: 'Task 4: Sum Increasing Series'
labels: enhancement
assignees: ''

---

Implement code in the `sumSeriesIncreasing()` function to generate
the first 0..n terms of the defined series and sum them up.  In this first
version we always just add the next term to the running sum.

You need to do the following:

1. Like before, start by defining local variables named `sum` and `term`.  Both
   of these need to be of type `double` for this task.  This time nitialize both
   of these local variables to `0.0`
2. You are required to use a `for` loop to perform indexed controlled looping in
   this task.  Create a for loop that uses `i` as and index variable / counter.
   The loop should run from `i = 0` to when `i <= n`.
3. Inside of the loop calculate the $i^{th}$ term each time and put the calculation
   in the `term` variable you defined.  For example when `i` is 0 you need
   to calculate `term = 4.0 / 1.0`, when `i` is 1 the term is `term = 4.0 / (1.0 + 2.0)`.
   If you look at the equation above, the denominator of this term is basically
   $1.0 + 2.0 i$.  **HINT:** as hinted at here, use `4.0` and `1.0` instead of
   `4` and `1`.  The former will be interpreted as float/double expressions, and
   this will force C/C++ to perform the calculation as a `double` type.  If you
   do something like `4 / 3`, C/C++ performs integer division, and you get a result
   of integer 1, instead of a real valued result like you expect.
4. If you correctly calculate the $i^{th}$ term, then you next just add this term
   into your running `sum`.
5. As given this function is a stub function that returns `0.0`.  Once you are correctly
   calculating the sum of the series in your `for` loop, you should return the
   resulting `sum` as the result at the end after your `for` loop exits.

**Suggested Solution**

Be careful of integer division.  In C/C++ something like `4 / 3` will see the two
values as integer constants, and will thus perform an integer division and return an
integer result.  Thus `4 / 3` actually retuns 1, because 4 divided by 3 is 1 with a
remainder of 1.  You can force C/C++ to use real valued (double/float) results by
specifying double/float constant expressions.  For example `4.0 / 3.0` will do what
you probably expect and perform a floating point division with a result of `1.333333`.


**Additional Requirements**

- You are required to use `double` types for your `sum` and `term` variables.
- You are required to initialize `sum` and `term` to 0.0 before doing any calculations.
- You are required to use an index controlled `for` loop that creates and uses a
  variable `i` to loop from 0 up to and including n iterations.
- You are required to calculate the current `term` for iteration `i` inside of the
  `for` loop.
- For this task then you simply always just add in the calculated `term` to the
  running `sum`.
- The function will not pass tests unless you return the `sum` at the bottom, after
  the loop terminates.
