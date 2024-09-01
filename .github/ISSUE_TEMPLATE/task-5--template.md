---
name: 'Task 5: Estimate PI using Leibniz Series'
about: Task 4 for Students
title: 'Task 5: Estimate PI using Leibniz Series'
labels: enhancement
assignees: ''

---

Implement code in the `estimatePi()` function to generate
the first 0..n terms of the defined series.  In this version we
implement the full series to try and estimate the value of PI, which means
we need to alternate adding and subtracting subsequent terms of the
series to our running sum.  Your code will be mostly identical to
that from the previous Task 4.  You simply need to add in a `if / else` condition
to perform addition of the `term` on even iterations of `i` and subtraction
on odd iterations of `i`.

You need to do the following:

1. Start by copying your working implementation from `sumSeriesIncreasing()`
2. Add in an `if / else` condition.  Test `i` using the modulus operator.  
   When `i` is even, add it to the running sum.  When `i` is odd, instead subtract
   it from the running sum.

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
- What you do with the term is slightly more complicated.  You are required to use
  the modulus operator `%` to test if the iteration variable `i` is even or odd.
  You are required to add in an `if / else` condition that adds in the current
  `term` when `i` is an even iteration, and subtracts the `term` when `i` is an
  odd iteration.
- The function will not pass tests unless you return the `sum` at the bottom, after
  the loop terminates.
