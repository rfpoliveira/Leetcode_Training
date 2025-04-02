#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) 
{
    if (numsSize == 0)
        return (0);
    int j = 0;
    int k = 0;
    int temp[numsSize];
    for (int i = 0; i < numsSize - 1; i++)
    {
        if (nums[i] != nums[i + 1])
        {
            temp[j++] = nums[i];
            k++;
        }
    }
    temp[j] = nums[numsSize - 1];
    k++;
    for (int i = 0; i < k; i++)
        nums[i] = temp[i];
    return (k);
}

int main (void)
{
    int array[] = {1, 1, 2, 2, 3, 3, 4};
    int k = removeDuplicates(array, 7);
    for (int i = 0; i < 5; i++)
        printf("%i ", array[i]);
    printf("k: %i\n", k);
}

/* Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. 
The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. 
The remaining elements of nums are not important as well as the size of nums.
Return k. */
