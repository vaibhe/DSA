class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int len = nums.size() * 2;
        int arr = nums.size();
     
        vector<int> ans(len);
        for ( int i = 0 ; i < arr; i++){
            ans[i] = ans[i + arr] = nums[i];
        }
        return ans;

   
    

            }
};