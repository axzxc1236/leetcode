//question : https://leetcode.com/problems/climbing-stairs/
//runtime  : 0ms
int climbStairs(int n) {
    //Yes, it is almost Fibonacci sequence.
    int i,num1=0,num2=1,num3;
    for (i=0;i<n;i++) {
        num3=num1+num2;
        num1=num2;
        num2=num3;
    }
    return num3;
}