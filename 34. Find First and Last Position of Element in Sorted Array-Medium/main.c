/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
// int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
//     int* result = malloc(sizeof(int) * 2);
//     result[0] = -1;
//     result[1] = -1;

//     bool isTrue = true;
//     int j = 0;

//     for (int i = 0; i<numsSize; i++) {
//         if (nums[i] == target && isTrue) {
//             result[j] = i;
//             *returnSize = 2; 
//             isTrue = false;
//             j++;
//         } else if(nums[i] == target && !isTrue){
//             result[1] = i;
//         }
//     }
//     *returnSize = 2;
//     return result;
// }

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int* result = malloc(sizeof(int) * 2);
    result[0] = -1;
    result[1] = -1;

    bool isTrue = true;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target && isTrue) {
            result[0] = i;
            result[1] = i;  // ✅ Ensure first occurrence is also last if no other is found
            isTrue = false;
        } else if (nums[i] == target) {
            result[1] = i;
        }
    }
    *returnSize = 2;
    return result;
}

 
