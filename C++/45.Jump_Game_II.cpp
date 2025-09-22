/*You are given a 0-indexed array of integers nums of length n. You are initially positioned at index 0.

Each element nums[i] represents the maximum length of a forward jump from index i. In other words, if you are at index i, you can jump to any index (i + j) where:

    0 <= j <= nums[i] and
    i + j < n

Return the minimum number of jumps to reach index n - 1. The test cases are generated such that you can reach index n - 1.*/

#include <vector>
#include <iostream>
using namespace std;

int jump(vector<int>& nums)
{
    int n = nums.size();
    int curr = 0;
    int high = 0;
    int count = 0;

    if (n == 1)
        return (0);
    for (int i = 0; i < n - 1; i++)
    {
        high = max(high, i + nums[i]);
        if (i == curr)
        {
            count++;
            curr = high;
            if (curr >= n - 1)
                break ;
        }
    }
    return (count);
}

int main (void)
{
    vector<int> prices = {2,3,0,1,4};
    cout << jump(prices) << endl;
    return 0;
}