class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>freq;
        for(auto it: nums){
            freq[it]++;
        }
        //indices se value denote and arr[i]= frequency of i 
        vector<int>ans;
        vector<vector<int>>arr(n+1);
        for(auto it : freq){
            arr[it.second].push_back(it.first);
        }
        for(int i=n;i>=0;i--){
            if(arr[i].size()==0) continue;
            while(arr[i].size() && k>0){
                ans.push_back(arr[i].back());
                arr[i].pop_back();
                k--;
            }
        }
        return ans;
    }
};