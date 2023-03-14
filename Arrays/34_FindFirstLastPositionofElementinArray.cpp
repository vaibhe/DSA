class Solution {
public:

int First(vector<int>& nums,int key ){
    int s = 0;
    int e = nums.size() - 1;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s <= e){
        if ( nums[mid] == key){
            ans = mid;
            e = mid - 1;
            
        }

       else if(nums[mid] < key){
            s = mid + 1;
        }

        else{
            e = mid - 1;
        }
             mid = s + (e - s)/2;
    } 
    return ans;
}


int Last(vector<int>& nums,int key ){
    int s = 0;
    int e = nums.size() - 1;
    int ans = -1;
    int mid = s + (e - s)/2;
    while(s <= e){
        if ( nums[mid] == key){
            ans = mid;
            s = mid + 1;
            
        }

      else  if(nums[mid] < key){
            s = mid + 1;
        }

        else{
            e = mid - 1;
        }
             mid = s + (e - s)/2;
    } 
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
      
        vector<int> answer;
        int val1 = First(nums,target);
        int val2 = Last(nums,target);
         answer.push_back(val1);
         answer.push_back(val2);

         return answer;
        
    }
};