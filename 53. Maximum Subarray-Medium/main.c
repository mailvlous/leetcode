int maxSubArray(int* nums, int numsSize) {
    int i;
    int max = nums[0];
    int temp = 0;

    for(i=0; i<numsSize; i++) {
       temp = temp+nums[i];

       if (max<temp){
        max = temp;
       }

       if(temp<0){ //ngereset lagi si pointer temp
        temp=0;
       }
    }

    return max;
}