#include <iostream>
#include <vector>
using namespace std;

// Constraints:

// 1 <= numberOfItems <= 200

// 0 <= weights[i] <= 1000 for all 0 <= i < n
// 0 <= values[i] <= 1000 for all 0 <= i < n

// 0 <= maxWeightAllowed <= 1000

// Function to obtain the maximum value that can be obtained from the knapsack
int knapsack(int maxWeightAllowed, const vector<int> &weights, const vector<int> &values, int numberOfItems)
{
    // Create a DP table
    vector<vector<int>> dp(numberOfItems + 1, (vector<int>(maxWeightAllowed + 1, 0)));

    // Build the dp table
    for (int item = 1; item < numberOfItems + 1; item++)
    {
        for (int weight = 0; weight < maxWeightAllowed + 1; weight++)
        {
            //dp[item][weight] represents the maximum value that can be obtained using the first 'item' items and a knapsack of capacity 'weight'.
            if (weights[item - 1] <= weight)
                dp[item][weight] = max(dp[item - 1][weight], dp[item - 1][weight - weights[item - 1]] + values[item - 1]);
            else
                dp[item][weight] = dp[item - 1][weight];
        }
    }

    // The max val will be present at dp[numberOfItems][maxWeightAllowed];
    return dp[numberOfItems][maxWeightAllowed];
}

int main()
{
    int numberOfItems, maxWeightAllowed;

    // Get the number of Items
    cout << "Enter the number of items : ";
    cin >> numberOfItems;

    // Initialize the weight and values items vector
    vector<int> weights(numberOfItems);
    vector<int> values(numberOfItems);

    // Get the weights of the items
    cout << "Enter the weight of each items (separated by spaces) : ";
    for (int i = 0; i < numberOfItems; i++)
    {
        cin >> weights[i];
    }

    // Get the values of the corresponding items
    cout << "Enter the value of each items (separated by spaces) : ";
    for (int i = 0; i < numberOfItems; i++)
    {
        cin >> values[i];
    }

    // Get the maximum allowed weight of the knapsack
    cout << "Enter the maximum weight allowed of the knapsack : ";
    cin >> maxWeightAllowed;

    // Calculate the maximum value that can be obtained
    int maxValue = knapsack(maxWeightAllowed, weights, values, numberOfItems);

    cout << "Maximum value in Knapsack = " << maxValue << endl;

}