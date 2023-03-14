class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        int store;

        for ( int i =0 ; i < nums.size(); i++){
          store =  nums[nums[i]];
          ans.push_back(store);
        }

        return ans;
        
    }
};