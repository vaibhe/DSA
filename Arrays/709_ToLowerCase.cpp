class Solution {
public:
  
  char toLower(char ch){
      if (ch >= 'A' && ch <= 'Z') {
        char temp = ch - 'A' + 'a';
        return temp;
      }

      else{
           return ch;
      }
  }

    string toLowerCase(string s) {
        
        for ( int i = 0; i < s.length(); i++){
           s[i] = toLower(s[i]);
        }
        return s;
    }
};