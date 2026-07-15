 class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.length()!=t.length()) return false;
       map<char,int>mp;
       for(auto it: s){
        mp[it]++;
       } 
       for(char it: t){
        mp[it]--;
       }
       for(auto it: mp){
        if(it.second!=0) return false;
       }
       return true;
    }
};
