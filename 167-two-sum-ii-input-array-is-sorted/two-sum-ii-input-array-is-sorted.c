/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int l = 0;
    int r = numsSize - 1;

    while (l < r) {
        int sum = nums[l] + nums[r];
        if (sum == target) {
            int *result = (int *)malloc(sizeof(int) * 2);
            result[0] = l + 1;
            result[1] = r + 1;
            *returnSize = 2;
            return result;
        } else if (sum < target) {
            l++;
        } else {
            r--;
        }
    }
    
    
    return (int *)NULL;
}