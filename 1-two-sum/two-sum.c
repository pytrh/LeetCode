/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>
#include <stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int r, l;
    int *result = (int *)malloc(sizeof(int) * 2);
    // if (result == NULL) {
    //     return NULL; // Failed to allocate memory
    // }
    result[0] = -1;
    result[1] = -1;
    for (int i = 0; i < numsSize; i++){
        int x = target - nums[i];
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[j] == x) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    //*returnSize = 2; // Set the return size even if no solution was found
    return result;
}