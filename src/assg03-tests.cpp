/** @file assg03-tests.cpp
 *
 * @brief Unit tests for Assignment 03: Iteration (looping, repetition)
 *   Control Structures
 *
 * @author Derek Harter
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @note   assg : Assignment 02: Basic Elements and Selection Control
 * @date   September 01, 2024
 *
 * Assignment unit tests.  This file contains tests of the work you do
 * for the individual tasks for the assignment.  You should perform the
 * tasks in order, from Task 1 through the last task.  To start a task,
 * change the `#undef` statement to `#define`.  This will enable the test
 * cases for that task.
 */
#include "assg03-library.hpp"
#include "catch.hpp"
#include <iostream>
using namespace std;

// change these to #define when ready to begin working on each task,
// once defined they will enable the tests declared below for each task
#undef task1
#undef task2
#undef task3
#undef task4
#undef task5

/** sumRangeIncreasing() test cases
 * Write your code in the sumRangeIncreasing() function to pass
 * the following tasks as described in the assignment description.
 */
#ifdef task1
TEST_CASE("Task 1 <sumRangeIncreasing()> tests", "[task1]")
{
  // sum first 5 integers 1 + 2 + 3 + 4 + 5 == 15
  CHECK(sumRangeIncreasing(1, 5, 1) == 15);

  // check that you are using step size and including
  // the end value inclusively in sum
  // 1 + 3 + 5 == 9
  CHECK(sumRangeIncreasing(1, 5, 2) == 9);

  // should be using signed integers for all inputs and output
  CHECK(sumRangeIncreasing(-5, 5, 1) == 0);
  CHECK(sumRangeIncreasing(-5, 5, 3) == -2);

  // some more complex general tests
  CHECK(sumRangeIncreasing(1, 100, 2) == 2500); // sum of all odd integers in [1,100]
  CHECK(sumRangeIncreasing(2, 100, 2) == 2550); // sum of all even integers in [2,100]
  CHECK(sumRangeIncreasing(-1234, 1234, 7) == -706);
  CHECK(sumRangeIncreasing(-1234, 1230, 7) == -706);
  CHECK(sumRangeIncreasing(-1234, 1229, 7) == -1936);
  CHECK(sumRangeIncreasing(-5000, 9999, 13) == 2878653);

  // if begin is bigger than end for this first function, should end up just
  // returning 0 as the sum since no values are in the range
  CHECK(sumRangeIncreasing(6, 5, 1) == 0);
  CHECK(sumRangeIncreasing(10, 5, 3) == 0);
}
#endif

/** sumRangeDecreasing() test cases
 * Write your code in the sumRangeDecreasing() function to pass
 * the following tasks as described in the assignment description.
 */
#ifdef task2
TEST_CASE("Task 2 <sumRangeDecreasing()> tests", "[task2]")
{
  // sum first 5 integers 5 + 4 + 3 + 2 + 1 == 15
  CHECK(sumRangeDecreasing(5, 1, -1) == 15);

  // check that you are using step size and including
  // the end value inclusively in sum
  // 5 + 3 + 1 == 9
  CHECK(sumRangeDecreasing(5, 1, -2) == 9);

  // should be using signed integers for all inputs and output
  CHECK(sumRangeDecreasing(5, -5, -1) == 0);
  CHECK(sumRangeDecreasing(5, -5, -3) == 2);

  // some more complex general tests
  CHECK(sumRangeDecreasing(99, 1, -2) == 2500);  // sum of all odd integers in [99,1]
  CHECK(sumRangeDecreasing(100, 2, -2) == 2550); // sum of all even integers in [100,2]
  CHECK(sumRangeDecreasing(1234, -1234, -7) == 706);
  CHECK(sumRangeDecreasing(1234, -1230, -7) == 706);
  CHECK(sumRangeDecreasing(1234, -1229, -7) == 1936);
  CHECK(sumRangeDecreasing(9999, -5000, -13) == 2890193);

  // if end is bigger than begin for this second version of the function,
  // should end up just returning 0 as the sum since no values are in the range
  CHECK(sumRangeDecreasing(5, 6, -1) == 0);
  CHECK(sumRangeDecreasing(5, 10, -3) == 0);
}
#endif

/** sumRange() test cases
 * Write your code in the sumRange() function to pass
 * the following tasks as described in the assignment description.
 *
 * NOTE: if you look carefully here you will see that we simply reuse all of
 *   the previous tests for both the increasing and decreasing versions of this
 *   code.  This final version is the most general, and should handle summing
 *   both increasing and decreasing series.
 */
#ifdef task3
TEST_CASE("Task 3 <sumRange()> tests", "[task3]")
{
  // Perform all of the tests again on general code when series is increasing

  // sum first 5 integers 1 + 2 + 3 + 4 + 5 == 15
  CHECK(sumRange(1, 5, 1) == 15);

  // check that you are using step size and including
  // the end value inclusively in sum
  // 1 + 3 + 5 == 9
  CHECK(sumRange(1, 5, 2) == 9);

  // should be using signed integers for all inputs and output
  CHECK(sumRange(-5, 5, 1) == 0);
  CHECK(sumRange(-5, 5, 3) == -2);

  // some more complex general tests
  CHECK(sumRange(1, 100, 2) == 2500); // sum of all odd integers in [1,100]
  CHECK(sumRange(2, 100, 2) == 2550); // sum of all even integers in [2,100]
  CHECK(sumRange(-1234, 1234, 7) == -706);
  CHECK(sumRange(-1234, 1230, 7) == -706);
  CHECK(sumRange(-1234, 1229, 7) == -1936);
  CHECK(sumRange(-5000, 9999, 13) == 2878653);

  // the general case did change the meanings of things like this.  It is now
  // valid for begin > end or begin < end.  So here we interpret as only the
  // initial value is in the range specified, e.g. begin=6, end=5, step=1
  // sums up 6 + 7 + 8... but only 6 is in the range from 6 to 5.
  CHECK(sumRange(6, 5, 1) == 6);
  CHECK(sumRange(10, 5, 3) == 10);

  // Also perform all of the tests for decreasing series as well, should also
  // work with this new function

  // sum first 5 integers 5 + 4 + 3 + 2 + 1 == 15
  CHECK(sumRange(5, 1, -1) == 15);

  // check that you are using step size and including
  // the end value inclusively in sum
  // 5 + 3 + 1 == 9
  CHECK(sumRange(5, 1, -2) == 9);

  // should be using signed integers for all inputs and output
  CHECK(sumRange(5, -5, -1) == 0);
  CHECK(sumRange(5, -5, -3) == 2);

  // some more complex general tests
  CHECK(sumRange(99, 1, -2) == 2500);  // sum of all odd integers in [99,1]
  CHECK(sumRange(100, 2, -2) == 2550); // sum of all even integers in [100,2]
  CHECK(sumRange(1234, -1234, -7) == 706);
  CHECK(sumRange(1234, -1230, -7) == 706);
  CHECK(sumRange(1234, -1229, -7) == 1936);
  CHECK(sumRange(9999, -5000, -13) == 2890193);

  // the general case did change the meanings of things like this.  It is now
  // valid for begin > end or begin < end.  So here we interpret as only the
  // initial value is in the range specified, e.g. begin=5, end=6, step=-1
  // sums up 5 + 4 + 3... but only 5 is in the range from 5 to 6.
  CHECK(sumRange(5, 6, -1) == 5);
  CHECK(sumRange(5, 10, -3) == 5);
}
#endif

/** sumSeriesIncreasing() test cases
 * Write your code in the sumSeriesIncreasing() function to pass
 * the following tasks as described in the assignment description.
 */
#ifdef task4
TEST_CASE("Task 4 <sumSeriesIncreasing()> tests", "[task4]")
{
  // when n=0 you should be summing up only the i=0 term, thus should return
  // 4.0 as the sum of the series
  CHECK_THAT(sumSeriesIncreasing(0), Catch::WithinAbs(4.0, 0.000000000001));

  // now test sum for n=1 up to n=5.
  // For n=1 should sum 4/1 + 4/3
  CHECK_THAT(sumSeriesIncreasing(1), Catch::WithinAbs(5.333333333333333, 0.000000000001));
  // For n=2 should sum 4/1 + 4/3 + 4/5
  CHECK_THAT(sumSeriesIncreasing(2), Catch::WithinAbs(6.133333333333333, 0.000000000001));
  // For n=3 should sum 4/1 + 4/3 + 4/5 + 4/7
  CHECK_THAT(sumSeriesIncreasing(3), Catch::WithinAbs(6.704761904761904, 0.000000000001));
  // For n=4 should sum 4/1 + 4/3 + 4/5 + 4/7 + 4/9
  CHECK_THAT(sumSeriesIncreasing(4), Catch::WithinAbs(7.149206349206349, 0.000000000001));
  // For n=5 should sum 4/1 + 4/3 + 4/5 + 4/7 + 4/9 + 4/11
  CHECK_THAT(sumSeriesIncreasing(5), Catch::WithinAbs(7.512842712842712, 0.000000000001));

  // randomly test some larger series sums
  CHECK_THAT(sumSeriesIncreasing(10), Catch::WithinAbs(8.723498311114408, 0.000000000001));
  CHECK_THAT(sumSeriesIncreasing(25), Catch::WithinAbs(10.4433363703597, 0.000000000001));
  CHECK_THAT(sumSeriesIncreasing(100), Catch::WithinAbs(13.15726925471897, 0.000000000001));
}
#endif

/** estimatePi() test cases
 * Write your code in the estimatePi() function to pass
 * the following tasks as described in the assignment description.
 */
#ifdef task5
TEST_CASE("Task 5 <estimatePi()> tests", "[task5]")
{
  // when n=0 you should be summing up only the i=0 term, thus should return
  // 4.0 as the sum of the series
  CHECK_THAT(estimatePi(0), Catch::WithinAbs(4.0, 0.000000000001));

  // now test sum for n=1 up to n=5.
  // For n=1 should sum +4/1 - 4/3
  CHECK_THAT(estimatePi(1), Catch::WithinAbs(2.666666666666667, 0.000000000001));
  // For n=2 should sum +4/1 - 4/3 + 4/5
  CHECK_THAT(estimatePi(2), Catch::WithinAbs(3.466666666666667, 0.000000000001));
  // For n=3 should sum +4/1 - 4/3 + 4/5 - 4/7
  CHECK_THAT(estimatePi(3), Catch::WithinAbs(2.8952380952380956, 0.000000000001));
  // For n=4 should sum +4/1 - 4/3 + 4/5 - 4/7 + 4/9
  CHECK_THAT(estimatePi(4), Catch::WithinAbs(3.3396825396825403, 0.000000000001));
  // For n=5 should sum +4/1 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11
  CHECK_THAT(estimatePi(5), Catch::WithinAbs(2.9760461760461765, 0.000000000001));

  // randomly test some larger series sums
  CHECK_THAT(estimatePi(10), Catch::WithinAbs(3.232315809405594, 0.000000000001));
  CHECK_THAT(estimatePi(25), Catch::WithinAbs(3.103145312886013, 0.000000000001));

  // an astute student might notice even after first 100 terms we don't even yet
  // have the second decimal digit correct.  You might want to see how far you
  // have to go to get the first 5 digits of pi correct...
  CHECK_THAT(estimatePi(100), Catch::WithinAbs(3.151493401070991, 0.000000000001));
  //CHECK_THAT(estimatePi(100000), Catch::WithinAbs(3.14160265348972, 0.000000000001));
}
#endif
