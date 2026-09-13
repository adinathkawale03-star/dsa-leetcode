class MinStack {
private:stack<pair<int,int>> a;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        if(a.empty()){
            a.push({value,value});
        }
        else{
            a.push({value,min(value,a.top().second)});
        }
    }
    
    void pop() {
        if(a.empty()){return;}
        a.pop();
    }
    
    int top() {
        if(a.empty()){return -1;}
        return a.top().first;
    }
    
    int getMin() {
        if(a.empty()){return -1;}
        return a.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */