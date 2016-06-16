//question : https://leetcode.com/problems/contains-duplicate/
//runtime  : 1580ms     yes it is too slow but still accepted.
bool containsDuplicate(int* nums, int numsSize) {
    int i,j;
    for (i=0;i<numsSize;i++) {
        for (j=0;j<i;j++) {
            if (nums[i]==nums[j]) return true;
        }
    }
    return false;
}