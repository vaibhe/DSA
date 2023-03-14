class Solution {
public:
   
   bool check(string &s, int half){
      
         int count1 = 0;
        int count2 = 0;
         for ( int i = 0 ; i < half; i++){ 
            if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u') ||(s[i] == 'A') || (s[i] == 'E')||(s[i] == 'I') || (s[i] == 'O') || (s[i] == 'U')){
          count1++;
        }
   } 

         for ( int j = half; j < s.length(); j++){
           if ((s[j] == 'a') || (s[j] == 'e') || (s[j] == 'i') || (s[j] == 'o') || (s[j] == 'u') ||(s[j] == 'A') || (s[j] == 'E')
           ||(s[j] == 'I') || (s[j] == 'O') || (s[j] == 'U')){ 
          count2++;
        } 
         }
       
        if ( count1 == count2){
            return true;
        }
        return false;
   }


    bool halvesAreAlike(string s) {
          int len = s.length()/2;
          bool ans = check(s,len);
          return ans;
       
      

      
    
    }
};