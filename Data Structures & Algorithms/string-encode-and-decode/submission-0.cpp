class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(auto s: strs){
            res+= to_string(s.length()) + "#" + s;
        }
        return res;
    }

    vector<string> decode(string s) { //5#hello5#world
        vector<string>res;
        int i=0;
        while(i<s.length()){
            int j=i; //j=0
            while(s[j]!='#'){
                j+=1; //j=1
            }
            int n= stoi(s.substr(i,j)); //5
            string s1= s.substr(j+1,n); //2,6+1 
            res.push_back(s1); //[hello]
            i=j+1+n;
        }
        return res;
    }
};
