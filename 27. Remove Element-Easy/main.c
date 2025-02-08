int removeElement(int* nums, int numsSize, int val) {
    int i;
    int count=0;
    for(i = 0; i<numsSize; i++) {
        if (nums[i] != val){
            nums[count]=nums[i];
            count++; 
        }
    }
    
    return count; /*ngembaliin nilai array tersisa
    tapi ga ngembaliin array -_-*/
}