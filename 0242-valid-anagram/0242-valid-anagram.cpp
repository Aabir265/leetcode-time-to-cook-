class Solution {
public:
    bool isAnagram(string s, string t) {
        int length1 = s.size();
        int length2 = t.size();
        string alphabets = "abcdefghijklmnopqrstuvwxyz";
        int freq[26] = {0};
        if(length1 != length2){
            return false;
        }
        for(int i = 0 ; i < s.size() ; i++){
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        for(int i = 0 ; i < 26 ; i++){
            if(freq[i] != 0){
                return false;
            }
            }
            return true;
        
    }
};