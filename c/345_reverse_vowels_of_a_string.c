//question : https://leetcode.com/problems/reverse-vowels-of-a-string/
//runtime  : 8ms
char* reverseVowels(char* s) {
    int len=strlen(s);
    int valid=0;
    int i=0,j=len-1;
    for (i=0;i<len;i++) if (s[i]=='a' || s[i]=='A' || s[i]=='e' | s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U') valid++;
    if (valid<2) return s;
    i=0;
    char tmp;
    while (i<j) {
        while (s[i]!='a' && s[i]!='A' && s[i]!='e' && s[i]!='E' && s[i]!='i'  && s[i]!='I' && s[i]!='o' && s[i]!='O' && s[i]!='u' && s[i]!='U') i++;
        while (s[j]!='a' && s[j]!='A' && s[j]!='e' && s[j]!='E' && s[j]!='i'  && s[j]!='I' && s[j]!='o' && s[j]!='O' && s[j]!='u' && s[j]!='U') j--;
        if (i<j) {
            tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
        }
        i++;
        j--;
    }
    return s;
}