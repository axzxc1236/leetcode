//question : https://leetcode.com/problems/power-of-four/
//runtime  : 0ms
//Yes, I know it has while loop.
bool isPowerOfFour(int num) {
    if (num==0) return false;
    while (num%4==0) num/=4;
    return num==1;
}