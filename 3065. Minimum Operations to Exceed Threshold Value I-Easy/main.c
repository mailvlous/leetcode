int minOperations(int* nums, int numsSize, int k) {
    int i;
    int count = 0;
    
    for(i = 0; i < numsSize; i++) {
        if (nums[i] >= k) {
            count++;
        }
    }
    return (numsSize) - count;
}