class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int k) {
        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            if(mp.find(k-arr[i])!=mp.end()){
                ans.push_back(i);
                ans.push_back(mp[k-arr[i]]);
                break;
            }
            mp[arr[i]] = i;
        }
        return ans;
    }
};
