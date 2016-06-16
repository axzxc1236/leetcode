//question : https://leetcode.com/problems/valid-anagram/
//runtime  : 0ms
bool isAnagram(char* s, char* t) {
    if (strlen(s)!=strlen(t)) return false;
    int i,j,len=strlen(s),count1[25]={0},count2[25]={0};
    for (i=0;i<len;i++) {
        count1[s[i]-97]++;
        count2[t[i]-97]++;
    }
    for (i=0;i<26;i++)
        if (count1[i] != count2[i]) return false;
    return true;
}