class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char,int> mp;
        int l = 0,  r = 0;
        int len = 0;int maxlen = 0;
        

        while(r<s.size()){
            char current = s[r];
            if(mp.count(current)){
                if(mp[s[r]]>=l){
                    l = mp[s[r]] + 1;
                }
            }
            len = r - l + 1;
            maxlen = max(len,maxlen);
            mp[s[r]] = r;
            r++;
        }

        return maxlen;
    }
};
