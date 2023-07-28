class Solution {
public:
    int countEven(int num) {
        int count = 0;
        for ( int i = 2; i <= num; i++){
            int sum = 0;
            int current = i;
            while(current != 0){
                sum += current%10;
                current/=10;
            }
            if ( sum%2 == 0){
                count++;
            }
        }

        return count;
        
    }
};