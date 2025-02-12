void moveZeroes(int* nums, int numsSize) {
    int first = 0; 
    

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[first] = nums[i];
            first++;
        }
    }

    for (int i = first; i < numsSize; i++) {
        nums[i] = 0;
    }
}