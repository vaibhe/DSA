class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int size = nums.size();
        vector<int> target;

        for ( int i = 0;  i < index.size(); i++){
            int og_index = index[i];
            target.insert(target.begin() + og_index,nums[i]);
             
        }
        return target;
    }
};