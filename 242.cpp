class Solution {
public:
    bool isAnagram(string s, string t) {
        int alphaCalS[26] = {0};
        int alphaCalT[26] = {0};
        int lenA = s.size();
        int lenB = t.size();
        if(lenA != lenB) return false;
        for(int i = 0 ; i < lenA ;i++){
            alphaCalS[s[i]-'0' - 49]++;
            alphaCalT[t[i]-'0' - 49]++;
        }
        for(int i = 0 ; i < 26 ; i++){
            if(alphaCalS[i] != alphaCalT[i]){
                return false;
            }
        }
        return true;
    }
};