class MyQueue {
private:
   stack<int> a;
   stack<int> b;
public:
    MyQueue() {
    }
    
    void push(int x) {
        a.push(x);
    }
    
    int pop() {
        if(!b.empty()){
            int ele=b.top();
            b.pop();
            return ele;
        }
        else{
            if(a.empty()){
                return -1;
            }
            while(a.size()){
              b.push(a.top());
              a.pop();
            }
            int ele=b.top();
            b.pop();
            return ele;
        }
    }
    
    int peek() {
        if(!b.empty()){
            return b.top();
        }
        else{
            if(a.empty()){
                return -1;
            }
            while(a.size()){
                b.push(a.top());
                a.pop();
            }
            return b.top();
        }
    }
    
    bool empty() {
        return b.empty() && a.empty();
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