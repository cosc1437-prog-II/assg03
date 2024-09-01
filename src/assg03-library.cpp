/** @file assg03-library.cpp
 *
 * @brief Implementation file for Assignment 03: Iteration (looping, repetition)
 *   Control Structures
 *
 * @author Derek Harter
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @note   assg : Assignment 02: Basic Elements and Selection Control
 * @date   September 01, 2024
 *
 * Assignment implementation file.  All of the actual implementation of
 * functions for tasks goes into an implementation file with a .cpp extension.
 * The prototypes of any functions that are used by others should be put into
 * the .hpp header file.
 */
#include <iomanip>
#include <iostream>
using namespace std;

/** @brief Sum range with increasing step size
 *
 * The purpose of this function is to sum up a sequence of integers within some
 * range [begin, end] (inclusive), only summing up every step size value in the
 * range.  For example if begin=1, end=5 and step=2, we sum up the values
 *
 *     1 + 3 + 5 = 9
 *
 * This function assumes that the step size is always a positive integer so that
 * the values in the range being summed are always increasing.
 *
 * @param begin An int value which is the beginning value of the range of values
 *   to be summed up and returned.
 * @param end An int value which is the ending value (inclusive) of the range
 *   of values to be summed up and returned.
 * @param step An int which specifies the step size to take of the values summed
 *   in the range of values.  Thus function assumes that step is always a
 *   positive integer step > 0
 *
 * @returns int Returns the sum of all values in the range of the series
 *   begin + (begin + step) + (begin + 2*step) ... <= end
 */
int sumRangeIncreasing(int begin, int end, int step)
{
  // your code for task 1 goes here
  
  // currently stubbed to return 0, but you must return the running
  // sum you calculate
  return 0;
}

/** @brief Sum range with decreasing step size
 *
 * The purpose of this function is to sum up a sequence of integers within some
 * range [begin, end] (inclusive), only summing up every step size value in the
 * range.  This differs from the previous function in that we assume that the
 * step size will be negative and begin is the upper value of the range.
 * For example if begin=5, end=1 and step=-2, we sum up the values
 *
 *     5 + 3 + 1 = 9
 *
 * This function assumes that the step size is always a negative integer so that
 * the values in the range being summed are always decreasing from begin down
 * to end.
 *
 * @param begin An int value which is the beginning value of the range of values
 *   to be summed up and returned, should be the upper (larger) value of the
 *   range.
 * @param end An int value which is the ending value (inclusive) of the range
 *   of values to be summed up and returned.  Should be the lower (smaller)
 *   value of the range
 * @param step An int which specifies the step size to take of the values summed
 *   in the range of values.  Thus function assumes that step is always a
 *   negative integer step < 0
 *
 * @returns int Returns the sum of all values in the range of the series
 *   begin + (begin + step) + (begin + 2*step) ... >= end
 */
int sumRangeDecreasing(int begin, int end, int step)
{
  // your code for task 2 goes here
  
  // currently stubbed to return 0, but you must return the running
  // sum you calculate
  return 0;
}

/** @brief Sum range step size
 *
 * The purpose of this function is to sum up a sequence of integers within some
 * range [begin, end] (inclusive), only summing up every step size value in the
 * range. This function is the general case, it allows for a positive step size
 * if begin <= end and the series summed increases, or a negative step size
 * when begin >= end and the series summed will decrease.  So if
 * begin=1, end=5, step=2 we sum
 *
 *     1 + 3 + 5 = 9
 *
 * and if begin=5, end=1, step=-2 we sum
 *
 *     5 + 3 + 1 = 9
 *
 * @param begin An int value which is the beginning value (inclusive) of the
 *   range of values to be summed up and returned.
 * @param end An int value which is the ending value (inclusive) of the range
 *   of values to be summed up and returned.
 * @param step An int which specifies the step size to take of the values summed
 *   in the range of values.
 *
 * @returns int Returns the sum of all values in the range of the series
 *   begin + (begin + step) + (begin + 2*step) ...  begin <= current <= end
 */
int sumRange(int begin, int end, int step)
{
  // your code for task 3 goes here
  
  // currently stubbed to return 0, but you must return the running
  // sum you calculate
  return 0;
}

/** @brief Calculate increasing series
 *
 * As a first step to calculating pi using a series, we will calculate and sum
 * up the series by only adding the terms of the series together.  Thus given
 * input n, we want to calculate the sum of the series for i=0,1,2,...,n so if
 * n==3 we sum up the first 4 terms of the series:
 *
 * 4/1 + 4/3 + 4/5 + 4/7
 *
 * @param n The number of terms to generate and sum up in the series.  We sum
 *   up the ith terms for i=0,1,2,...,n, inclusive of n.  So if n is 3 we are
 *   actually summing up the first 4 terms of the defined series.
 *
 * @returns double Returns the sum of the first n terms of the defined series.
 */
double sumSeriesIncreasing(int n)
{
  // your code for task 4 goes here
  
  // currently stubbed to return double 0.0, but you must return the running
  // sum you calculate
  return 0.0;
}

/** @brief Estimate pi using Leibniz series
 *
 * The Leibniz series can be used to calculate/estimate pi, it is defined as
 *
 *   pi = sum_i=0^+infty (-1)^i \frac{4}{1 + 2i} = 4/1 - 4/3 + 4/5 - 4/7 + 4/9 ...
 *
 * We are given n as input, the number ot germs in the series to generate and
 * sum up.  We generate and sum up the terms for i=0,1,2,...n and return this
 * sum, which will converge to pi in the limit as n goes to infinity.
 *
 * @param n The number of terms to generate and sum up in the Leibniz series.
 *   We sum up the ith terms for i=0,1,2,...,n, inclusive of n.  So if n
 *   is 3 we are actually summing up the first 4 terms of the defined series.
 *
 * @returns double Returns the sum of the first n terms of the Leibniz
 *   series, which converges to pi as n->infinty
 */
double estimatePi(int n)
{
  // your code for task 5 goes here
  
  // currently stubbed to return double 0.0, but you must return the running
  // sum you calculate
  return 0.0;
}
