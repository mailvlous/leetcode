#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    int i = 0;                
    int j = numsSize - 1;     

    if (numsSize == 1) {
        if (nums[i] == target) {
            return i;
        }
        return -1;
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

    return -1;
}

int main() {
    int nums[] = {1, 3, 5, 7, 9, 11, 13};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target;

    scanf("%d", &target);

    int result = search(nums, numsSize, target);

    if (result != -1) {
        printf("%d %d.\n", target, result);
    } else {
        printf("%d \n", target);
    }

    return 0;
}
