#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) 
{
    if (numsSize == 0 || numsSize == 1)
        return (numsSize);
    int j = 0;
    int k = 0;
    int temp[numsSize];
    temp[j++] = nums[0];
    k++;
    for (int i = 1; i < numsSize - 1; i++)
    {
        if (nums[i] != nums[i - 1])
        {
            temp[j++] = nums[i];
            k++;
        }
        else if (nums[i] != nums[i + 1])
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
    int len = 2;
    int array[] = {1, 1};
    int k = removeDuplicates(array, len);
    for (int i = 0; i < len; i++)
        printf("%i ", array[i]);
    printf("k: %i\n", k);
}

/* Given an integer array nums sorted in non-decreasing order, remove some duplicates in-place such that each unique element appears at most twice.
 The relative order of the elements should be kept the same.
Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array 
nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. 
It does not matter what you leave beyond the first k elements.
Return k after placing the final result in the first k slots of nums.
Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory. */