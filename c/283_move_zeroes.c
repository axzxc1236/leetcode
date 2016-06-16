//question : https://leetcode.com/problems/move-zeroes/
//runtime  : 8ms
void moveZeroes(int* nums, int numsSize) {
    int i,index[numsSize],zeroes=0;
    for (i=0;i<numsSize;i++) {
        if (nums[i]!=0) {
            index[zeroes]=i;//record index of non-zero integers
            zeroes++;
        }
    }
    if (zeroes > 0) { //If there are no any zero in the array, there are no points to change the array 
        for (i=0;i<numsSize;i++) {
            if (i<zeroes)
                nums[i]=nums[index[i]];
            else
                nums[i]=0;
            
        }
    }
}