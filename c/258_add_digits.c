//question : https://leetcode.com/problems/add-digits/
//runtime  : 4ms
int addDigits(int num) {
    while (num >= 10) num = num%10 + (num-num%10)/10;
    return num;
}