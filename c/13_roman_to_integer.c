//question : https://leetcode.com/problems/roman-to-integer/
//runtime  : 24ms
int romanToInt(char* s) {
    int len = strlen(s),i,sum=0,tmp,tmp2=0;
    s+=len-1;
    for (i=len-1;i>=0;i--) {
        tmp = getnum(*s);
        if (tmp>=tmp2) sum+=tmp; else sum-=tmp;
        tmp2=tmp;
        s--;
    }
    return sum;
}

int getnum(int c) {
    switch (c) {
        case 73: return 1;    //ascii code of I == 73
        case 86: return 5;    //ascii code of V == 86
        case 88: return 10;   //ascii code of X == 88
        case 76: return 50;   //ascii code of L == 76
        case 67: return 100;  //ascii code of C == 67
        case 68: return 500;  //ascii code of D == 68
        case 77: return 1000; //ascii code of M == 77
        default: return 0;
    }
}