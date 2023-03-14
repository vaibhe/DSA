class Solution {
public:
    bool isValid(string s) {
        stack <char> stk;
     for ( int i = 0 ; i < s.length(); i++){
          //for opening bracket
         char ch = s[i];
         if ( ch == '(' || ch == '{' || ch == '['){
             stk.push(ch);
         }

         else{
           // For closing braces
             if( !stk.empty()){
                   char top = stk.top();
             if(  (ch == ')' && top == '(') ||  (ch == ']' && top == '[') ||  (ch == '}' && top == '{')){
                 stk.pop();
             }
             else{
                 return false;
             }
             }
             else{
                 return false;
             }
         }
     }
      if(stk.empty()){
             return true;
         }

        
             return false;
        
        


     }
};