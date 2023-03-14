class Solution {
public:

int rev(int x){
    int sum;
    long store = 0;
    while(x != 0){
        sum = x%10;
        store = (store*10) + sum;
        x /= 10;
        
    }
    
    return store;
}

    bool isPalindrome(int x) {

      

        long num = rev(x);

           if(x < 0){        // -2 < =
            return false;
        }

        if ( num == x){
            return true;
        }

       

        return false;
    }
};