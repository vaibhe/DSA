class Solution {
public:
    int calPoints(vector<string>& operations) {

       stack <int> record;
       int sum = 0; 

       for ( int i = 0; i < operations.size(); i++){
           if ( operations[i] == "C"){
               record.pop();
           }

           else if(operations[i] == "D"){
               int top = record.top() * 2;
               record.push(top);

           }

           else if ( operations[i] == "+"){
                int t1 = record.top();      
                record.pop();
                int t2 = record.top();   
                record.push(t1);
                record.push(t1 + t2);  
           }

           else{
               int num = stoi(operations[i]);
               record.push(num);
           }
       }

       while (!record.empty()) {
        sum += record.top();
        record.pop();
    }

    return sum ;
        
        
    }
};