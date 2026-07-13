class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int curr_sum=0;
        int ans=0;
        for(int x:nums){
            curr_sum+=x;
            if(mp.find(curr_sum-k)!=mp.end()){
                ans+=mp[curr_sum-k];
            }
            mp[curr_sum]++;
        }
        return ans;
    }
};