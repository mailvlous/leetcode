#include <stdio.h>


int countSubarrays(int* nums, int numsSize) {
    int count = 0;
    for (int i = 1; i < numsSize - 1; i++) {
        if (nums[i - 1] + nums[i + 1] == nums[i] / 2.0) {
            count++;
        }
    }
    return count;
}

int main() {
    int numsSize;

    int nums[numsSize];

    
    printf(" %d\n", numsSize);
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }


    int result = countSubarrays(nums, numsSize);

    printf(" %d\n", result);

    return 0;
}
