class Solution {
public:
    bool isAnagram(string s, string t){
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>>ans;
       vector<bool> visited(strs.size(), false);
       for(int i=0;i<strs.size();i++){
        if (visited[i]) continue;
        vector<string>ans1;
        ans1.push_back(strs[i]);
        visited[i] = true;
        for(int k=i+1;k<strs.size();k++){
            if(!visited[k] && isAnagram(strs[i],strs[k])) {
               ans1.push_back(strs[k]);
               visited[k] = true;
            }
        }
        ans.push_back(ans1);
       }
       return ans;
    }
};