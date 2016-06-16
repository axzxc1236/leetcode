//question : https://leetcode.com/problems/power-of-two/
//runtime  : 4ms
bool isPowerOfTwo(int n) {
    if (n==2 || n==1) return true;
    else if (n==0 || n%2!=0) return false;
    else return (isPowerOfTwo(n>>1));
}