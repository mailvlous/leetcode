#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int i = 0;                
    int j = numsSize - 1;

    if (numsSize == 1) {
        if (nums[i] >= target) {
            return i;
        }
        return i + 1;
    }

    while (i <= j) {
        int mid = (i + j) / 2;

        if (nums[mid] == target) {
            return mid;       
        } else if (nums[mid] < target) {
            i = mid + 1;      
        } else {
            j = mid - 1;      
        }
    }

    return i;
}

int main() {
    int nums[] = {1, 3, 5, 6};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target;


    scanf("%d", &target);

    int result = searchInsert(nums, numsSize, target);

    printf("%d %d.\n", target, result);

    return 0;
}
