class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int biker = 0;
        vector<int> ans;
        ans.push_back(biker);
        for ( int i =  0; i < gain.size(); i++){
            biker += gain[i];
            ans.push_back(biker);
        }
       int large =   *max_element(ans.begin(), ans.end());

        return large;

    }
};