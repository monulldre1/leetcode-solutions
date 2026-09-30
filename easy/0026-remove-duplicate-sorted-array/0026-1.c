#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int removeDuplicates(int* nums, int numsSize);


int main()
{
    int nums[] = {1, 2, 3, 4, 4, 5, 5, 6};
    int numsSize = 8;
    for(int i = 0; i < numsSize; i++)
    {
        printf("%d", nums[i]);
    }
    printf("\n");
    int k = removeDuplicates(nums , numsSize);
    for(int i = 0; i < k; i++)
    {
        printf("%d", nums[i]);
    }
}


int removeDuplicates(int* nums, int numsSize) {
    int i = 0;
    int numOfD = numsSize;
    while (i < numOfD - 1) 
    {
        
        if(nums[i] == nums[i+1])
        {
            numOfD--;
            for (int j = i; j < numOfD; j++){
                nums[j] = nums[j+1];
                
            }
        } else i++;

    }
    return numOfD;
}
