class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        int pro_wz=1, cntz=0;
        for(int n: nums){
            if(n==0){
                cntz++;
            }
            else{
                pro_wz*=n;
            }
        }
        for(int n: nums){
            if(n!=0){
                if(cntz>0){
                    ans.push_back(0);
                }
                else{
                    ans.push_back(pro_wz/n);
                }
            }
            else{
                if(cntz>1) ans.push_back(0);
                else ans.push_back(pro_wz);
            }
        }
        return ans;
    }
};
