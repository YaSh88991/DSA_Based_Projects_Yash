#include <iostream>
#include <vector>
#include <limits.h> // For INT_MAX

using namespace std;

// Constraints
// 1 <= denominations.length <= 12
// 1 <= denominations[i] <= 2^31 - 1
// 0 <= targetAmount <= 104

int coinChange(vector<int> &denominations, int targetAmount, int numOfCoins)
{
    vector<long long> dp(targetAmount + 1, LONG_MAX);

    dp[0] = 0; // Base case: zero coins needed to make amount zero

    for (auto &coin : denominations)
    {
        for (int amount = coin; amount <= targetAmount; amount++)
        {
            if (dp[amount - coin] != LONG_MAX)
            {
                dp[amount] = min(dp[amount], dp[amount - coin] + 1);
            }
        }
    }

    return dp[targetAmount] == LONG_MAX ? -1 : dp[targetAmount];

    /*
    This approach also works but is not optimised as the current one---

    vector<vector<long long>> dp(numOfCoins + 1, vector<long long>(targetAmount + 1, LLONG_MAX));

    // Base case: It takes 0 coins to make amount 0
    dp[0][0] = 0;

    // Base case: when amount is 0
    for (int coins = 1; coins <= numOfCoins; coins++)
    {
        dp[coins][0] = 0;
    }

    // Calculating min number of coins
    for (int coin = 1; coin <= numOfCoins; coin++)
    {
        for (int amount = 1; amount <= targetAmount; amount++)
        {
            if (denominations[coin - 1] <= amount)
                dp[coin][amount] = min(dp[coin - 1][amount], 1 + dp[coin][amount - denominations[coin - 1]]);
            else
                dp[coin][amount] = dp[coin - 1][amount];
        }
    }

    // If dp[numOfCoins][targetAmount] is still LLONG_MAX, it means it's not possible to make
    // the 'amount' using the given coins.
    return dp[numOfCoins][targetAmount] == LLONG_MAX ? -1 : dp[numOfCoins][targetAmount];
    */
}

int main()
{
    // Initialise the number of coins and the amount you want to make
    int numberOfCoins, amount;

    cout << "Enter the number of coins you have: ";
    cin >> numberOfCoins;

    cout << "Enter the amount you want to make: ";
    cin >> amount;

    // Check for edge cases
    if (numberOfCoins <= 0 || amount < 0)
    {
        cout << "Invalid input!" << endl;
        return 0;
    }

    // declare the denominations array
    vector<int> denominations(numberOfCoins);

    cout << "Enter the coin denominations (space-separated): ";

    // Initialise the denominations array
    for (int i = 0; i < numberOfCoins; i++)
    {
        cin >> denominations[i];
    }

    int numberOfCoinsNeeded = coinChange(denominations, amount, numberOfCoins);

    cout << "Minimum number of coins needed to make amount " << amount << " is: " << numberOfCoinsNeeded << endl;

    return 0;
}
