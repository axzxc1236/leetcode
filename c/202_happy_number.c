//question : https://leetcode.com/problems/climbing-stairs/
//runtime  : 0ms
bool isHappy(int n) {
    if (n<=0 || n==4) return false; //I don't know 4 is not a happy number until I looked up wikipedia, 4 creates a loop.
    int num = n,sum=0;
	//got the code from http://stackoverflow.com/a/3118505/6181016
    while (num) {
        sum+=pow(num%10,2);
        num /= 10;
    }
    if (sum==1) return true; else return isHappy(sum);
}