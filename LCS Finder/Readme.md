# Longest Increasing Subsequence (LIS) Finder

## Author

**Yash Verma**

[GitHub Profile](https://github.com/YaSh88991)


## Description

The Longest Increasing Subsequence (LIS) Finder is a C++ implementation that solves the LIS problem using Dynamic Programming. The goal is to determine the length of the longest subsequence in a given array of integers such that all elements of the subsequence are sorted in strictly ascending order.

## Problem Statement

Given an array of unsorted integers, find the length of the longest subsequence whose elements are in ascending order. The elements in the subsequence do not necessarily have to appear in consecutive positions in the initial array.

### Constraints

- `1 <= nums.length <= 2500`
- `-104 <= nums[i] <= 104`

**Input Format:**

- Enter the number of elements in the array.
- Enter each element of the array (space-separated or line-separated).

### Example

For the input array `{-3, 10, 5, 12, 15}`, the longest increasing subsequences are:
- `{-3, 5, 12, 15}`
- `{-3, 10, 12, 15}`

Both have a length of `4`, which is the expected output.