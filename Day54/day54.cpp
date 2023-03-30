// Is Subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
    int n = s.length();
    int m = t.length();
    int j = 0; 
    for (int i = 0; i < m and j < n; i++)
    if (t[i] == s[j]){
        j++;
    }
    return (j == n);
    }
};
