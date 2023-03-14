class Solution {
public:
    int reverse(int x) {
    int sum;
    long store = 0;
   
    while(x != 0){
        sum = x%10;

        // For (Assume the environment does not allow you to store 64-bit integers (signed or unsigned)).
         if (store > INT_MAX/10 || (store == INT_MAX / 10 && sum > 7)) return 0;
        if (store < INT_MIN/10 || (store == INT_MIN / 10 && sum < -8)) return 0;
        //
        store = (store*10) + sum;
        x /= 10;
        
    }
    
    return store;
}
    
};