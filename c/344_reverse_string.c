//question : https://leetcode.com/problems/reverse-string/
//runtime  : 4ms
char* reverseString(char* s) {
    int len = strlen(s);
    if (len > 0) {
        int i=0,j=len/2,k;
        char a;
        for (i=0;i<j;i++) {
            k=len-1-i;
            a = s[i];
            s[i] = s[k];
            s[k] = a;
        }
    }
    return s;
}