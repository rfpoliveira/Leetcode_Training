#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) 
{
    int k = 0;
    int j = 0;
    int i = 0;
    if (numsSize <= 0)
        return (0);
    int temp[numsSize];
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] != val)
        {
            temp[j++] = nums[i];
            k++;
        }
    }
    for (i = 0; i < numsSize; i++)
        nums[i] = temp[i];
    return (k);
}

int main (void)
{
    int array[] = {3, 2, 2, 3};
    int k = removeElement(array, 4, 3);
    for (int i = 0; i < 5; i++)
        printf("%i ", array[i]);
    printf("k: %i\n", k);
}

/* Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
Return k. 
funcion given: int removeElement(int* nums, int numsSize, int val) */
