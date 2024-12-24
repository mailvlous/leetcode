#include <stdio.h>
#include <stdlib.h>

int main() {
    int nums[100];
    int numsSize;

    scanf("%d", &numsSize);

    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }


    int target;
    scanf("%d", &target);

    int *result = twoSum(nums, numsSize, target);


    if (result) {
        printf("Indices of the two numbers are: %d and %d\n", result[0], result[1]);
        free(result);
    } else {
        printf("No two numbers found with the target sum.\n");
    }

    return 0;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    int *result = (int *)malloc(2 * sizeof(int));
    if (!result) {
        *returnSize = 0;
        return NULL;
    }

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2; 
                return result;
            }
        }
    }

    free(result);
    *returnSize = 0; 
    return NULL;
}
