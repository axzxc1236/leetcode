//question : https://leetcode.com/problems/excel-sheet-column-number/
//runtime  : 4ms
int titleToNumber(char* s) {
    int len=strlen(s),i,sum=0;
    for (i=0;i<len;i++)
        sum+=(s[i]-64)*ipow(26,len-i-1);
    return sum;
}

//got it from http://stackoverflow.com/a/101613/6181016
int ipow(int base, int exp)
{
    int result = 1;
    while (exp)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    }

    return result;
}