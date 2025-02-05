void sortColors(int* nums, int numsSize) {

    int len = numsSize-1;
    int j = 0;
    int i = 0;
    while(i<=len) {
        if (nums[i] == 2) {
            int temp = nums[i];
            nums[i] = nums[len]; //tuker sama yg terakhir
            nums[len] = temp;
            len--;
        }
        else if (nums[i] == 0) {
            int temp = nums[i];
            nums[i] = nums[j]; //tuker sama paling awal
            nums[j] = temp;
            j++;
            i++;
        } else {
            i++;
        }
    }

}