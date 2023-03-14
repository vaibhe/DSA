class MyQueue {
public:
   stack<int> first;
   stack<int> second;

  
    MyQueue() {
        
    }
    
    void push(int x) {
        first.push(x);
    }
    
    int pop() {
        int val =  peek();
        second.pop();
        return val;
        
    }
    
    int peek() {
        if(second.empty()){
            while(first.empty() == false){
                second.push(first.top());
                first.pop();
            }
        }
        return second.top();
    }
    
    bool empty() {
        if(first.empty() && second.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */