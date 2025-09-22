/*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3

Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2 */

#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums)
{
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
                count++;
        }
    if (count > n / 2)
        return (nums[i]);
    }
    return (-1);
}

int main(void)
{
    vector<int> nums = {1, 1, 2, 1, 3, 5, 1};
    cout << majorityElement(nums) << endl;
    return(0);
}
