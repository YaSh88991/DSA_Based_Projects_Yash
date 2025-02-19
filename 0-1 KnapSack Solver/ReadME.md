# 0-1 Knapsack Solver

## Author

**Yash Verma**

[GitHub Profile](https://github.com/YaSh88991)


## Description

The 0-1 Knapsack Solver is a C++ implementation of the classic 0-1 Knapsack problem using Dynamic Programming. Given a set of items, each with a weight and a value, the goal is to determine the maximum value that can be carried in a knapsack with a fixed weight capacity.

## Problem Statement

Given `n` items, each with a weight and a value, and a knapsack with a maximum weight capacity `W`, find the maximum total value of items that can be placed in the knapsack.

### Constraints

- `1 <= numberOfItems <= 200`
- `0 <= weights[i] <= 1000` for all `0 <= i < n`
- `0 <= values[i] <= 1000` for all `0 <= i < n`
- `0 <= maxWeightAllowed <= 1000`


**Input Format:**

- Enter the number of items.
- Enter the weights of the items (space-separated).
- Enter the values of the items (space-separated).
- Enter the maximum weight allowed for the knapsack.

## Example
- Enter the number of items: 3
- Enter the weights of the items (separated by spaces): 10 20 30
- Enter the values of the items (separated by spaces): 60 100 120
- Enter the maximum weight allowed of the knapsack: 50

**Output** - Maximum value in Knapsack = 220

