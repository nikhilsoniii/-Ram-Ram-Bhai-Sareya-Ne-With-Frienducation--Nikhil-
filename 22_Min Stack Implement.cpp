class MinStack {
public:

    stack<int>s1, s2;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s2.empty() || s2.top()>=val){
            s2.push(val);
        }
        s1.push(val);
    }
    
    void pop() {
        if(s1.top()==s2.top()){
            s2.pop();
        }

        s1.pop();
        
    }
    
    int top() {
        if(s1.empty()) return INT_MIN;
        return s1.top();
        
    }
    
    int getMin() {
        if(s2.empty()) return INT_MIN;
        return s2.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
