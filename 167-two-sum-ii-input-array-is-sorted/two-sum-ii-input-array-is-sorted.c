/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int r, l;
    
    // if (result == NULL) {
    //     return NULL; // Failed to allocate memory
    // }
    // result[0] = -1;
    // result[1] = -1;
    for (int i = 0; i < numsSize; i++){
        l = i + 1;
        r = numsSize - 1;
        int x = target - nums[i];
        while (l <= r){
            int m = l + (r - l) / 2;
            if (nums[m] == x){
                int *result = (int *)malloc(sizeof(int) * 2);
                result[0] = i + 1;
                result[1] = m + 1;
                *returnSize = 2; // Set the return size
                return result;
            }
            if (nums[m] < x)
                l = m + 1;
            else
                r = m - 1;
        }
    }
    // *returnSize = 0; // Set the return size even if no solution was found

    return (int *)NULL;
}