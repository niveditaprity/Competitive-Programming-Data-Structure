class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    stack<int>s1;
    void push(int x) {
        if(s1.empty())
        {
            s1.push(x);
            s1.push(x);
        }
        else
        {
            int minEle = s1.top();
            s1.push(x);
            if(minEle > x)
                s1.push(x);
            else
                s1.push(minEle);
        }
       
    }
    
    void pop() {
    s1.pop();
        s1.pop();
        
    }
    
    int top() {
        if(s1.empty())
            return -1;
        int temp = s1.top();
        s1.pop();
        int top = s1.top();
        s1.push(temp);
        return top;
        
    }
    
    int getMin() {
        if(s1.empty())
        {
            return -1;
        }
        else
        {
            return s1.top();
        }
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
