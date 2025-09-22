/*Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
*/

#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k)
{
    int n = nums.size() - 1;
    while (k > n)
        k = k - n - 1;
    nums.insert(nums.begin(), nums.end() - k, nums.end());
    nums.erase(nums.end() - k, nums.end());
}

int main(void)
{
    vector<int> nums = {1, 2, 3};
    rotate(nums, 3);

    int n = nums.size();
    cout << "rotated array:" << endl;
    for(int i = 0; i < n; i++)
        cout << nums[i] << ", ";
    cout << endl;
}