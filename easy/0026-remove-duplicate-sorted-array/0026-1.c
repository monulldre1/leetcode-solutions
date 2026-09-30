#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int removeDuplicates(int* nums, int numsSize);


int main()
{
    int* nums = {1, 2, 3, 4, 4};
    int numsSize = 5;
    removeDuplicates(nums , numsSize);
    for(int i = 0; i < numsSize; i++)
    {
        printf("%d", numsSize[i]);
    }
}


int removeDuplicates(int* nums, int numsSize) {
    int i = 0;
    int j = 0;
    int numOfD = 0;
    for(i; i < numsSize; i++) {
        while(i < numsSize && nums[i] == nums[i+1]) i++;

        numOfD++;

        for (int j = i; j < numsSize; j++){
            nums[i] = nums[i+1];
        }
        numsSize--;

    }
    return numOfD;
}
