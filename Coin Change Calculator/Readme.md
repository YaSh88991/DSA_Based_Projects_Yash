# Coin Change Calculator

## Author

**Yash Verma**

[GitHub Profile](https://github.com/YaSh88991)


## Description

The Coin Change Calculator is a C++ implementation that solves the Coin Change problem using Dynamic Programming. The goal is to determine the minimum number of coins required to make a given amount of money using a specified set of coin denominations.

## Problem Statement

Given an amount of money and a list of coin denominations, find the minimum number of coins needed to make that amount. If it's not possible to make the exact amount with the given denominations, return -1.


### Constraints

- `1 <= denominations.length <= 12`
- `1 <= denominations[i] <= 2^31 - 1`
- `0 <= amount <= 104`

**Input Format:**

- Enter the total amount you want to make.
- Enter the available coin denominations (space-separated).

## Example
- Enter the total amount you want to make: 27
- Enter the available coin denominations (space-separated): 1 5 10 25

**Output** - Minimum coins required:  4

Explanation: The optimal solution is to use one 25-coin, one 1-coin, and one 1-coin (25 + 1 + 1 = 27).

