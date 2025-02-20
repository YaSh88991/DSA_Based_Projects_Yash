#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int lengthOflis(vector<int> &nums)
{
    if (nums.empty())
        return 0; // Handle empty input

    vector<int> tail; // This will store the smallest tail of all increasing subsequences

    for (int num : nums)
    {
        // Use binary search to find the first element in tail that is >= num
        auto it = lower_bound(tail.begin(), tail.end(), num);

        if (it == tail.end())
        {
            // If num is greater than all elements in tail, append it
            tail.push_back(num);
        }
        else
        {
            // Otherwise, replace the found element with num
            *it = num;
        }
    }

    // The size of tail is the length of the longest increasing subsequence
    return tail.size();

    //Previous approach
    /*
    vector<int> tail;
    for (int n : nums)
    {
        if (tail.empty() || tail.back() < n)
        {
            tail.push_back(n);
        }
        else
        {
            int idx = binarySearch(tail, n);
            tail[idx] = n;
        }
    }
    return tail.size();
    */
}

// I have used lower_bound function instead of explicit binary search function
//  int binarySearch(const vector<int> &arr, int target)
//  { // finding Lower bound
//      int left = 0;
//      int right = arr.size() - 1;

//     while (left <= right)
//     {
//         int mid = (left + right) / 2;
//         if (arr[mid] == target)
//         {
//             return mid;
//         }
//         else if (arr[mid] > target)
//         {
//             right = mid - 1;
//         }
//         else
//         {
//             left = mid + 1;
//         }
//     }

//     return left;
// }

int main()
{
    // Initialise the number of elements
    int numOfElements;

    cout << "Enter the number of elements : ";
    cin >> numOfElements;

    // Initialize the number array
    vector<int> numbers(numOfElements);

    cout << "Enter the elements of the array : ";
    for (int i = 0; i < numOfElements; i++)
    {
        cin >> numbers[i];
    }

    int lengthOfLIS = lengthOflis(numbers);

    cout << "The length of the longest strictly increasing subsequence is : " << lengthOfLIS;
}